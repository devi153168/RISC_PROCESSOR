5-Stage Pipelined RISC-V Processor

A synthesizable-style **32-bit RISC-V processor implemented in SystemVerilog**, designed to demonstrate the fundamentals of RTL design, processor datapath organization, pipelining, data hazard handling, and simulation using Verilator.

This project was developed as an RTL/VLSI learning project with a focus on understanding how a processor is built from individual hardware modules and how instructions move through a pipelined datapath.

---

 Project Overview:-

The processor follows a classic **5-stage pipeline architecture**:

```text
        ┌─────┐
        │ IF  │  Instruction Fetch
        └──┬──┘
           │
        ┌──▼──┐
        │ ID  │  Instruction Decode / Register Read
        └──┬──┘
           │
        ┌──▼──┐
        │ EX  │  Execute / ALU
        └──┬──┘
           │
        ┌──▼──┐
        │ MEM │  Memory Access
        └──┬──┘
           │
        ┌──▼──┐
        │ WB  │  Write Back
        └─────┘
```

Pipeline registers separate each stage:

```text
IF → IF/ID → ID → ID/EX → EX → EX/MEM → MEM → MEM/WB → WB
```

The processor supports a basic subset of the **RISC-V ISA**, including arithmetic, logical, immediate, load, and store instructions.

---

Features:-

* 32-bit RISC-V datapath
* 5-stage instruction pipeline
* Program Counter and instruction fetch
* Instruction decoder
* 32 × 32-bit register file
* Immediate generation
* Arithmetic Logic Unit (ALU)
* Data memory
* Load and store operations
* Pipeline registers
* Data forwarding
* Load-use hazard detection
* Pipeline stall / bubble insertion
* Verilator-based simulation
* SystemVerilog RTL implementation
* Testbench-based functional verification

---

Processor Architecture

1. Instruction Fetch (IF)

The Program Counter provides the address of the next instruction.

```text
PC → Instruction Memory → Instruction
```

The PC normally increments by 4 bytes for each instruction.

---

2. Instruction Decode (ID)

The instruction is decoded to determine:

* Source registers (`rs1`, `rs2`)
* Destination register (`rd`)
* ALU operation
* Immediate value
* Register write control
* Memory read/write control
* ALU source selection

The register file supplies the operands required by the instruction.

---

3. Execute (EX)

The ALU performs the required operation.

Depending on the instruction, the ALU can perform operations such as:

* ADD
* SUB
* AND
* OR
* XOR

The ALU receives its operands either from the ID/EX pipeline register or through the forwarding network.

---

4. Memory Access (MEM)

Load and store instructions interact with the data memory.

```text
LW → Memory Read
SW → Memory Write
```

For arithmetic instructions, this stage simply passes the ALU result toward write-back.

---

5. Write Back (WB)

The final result is written into the destination register.

The write-back multiplexer selects between:

```text
ALU Result
     │
     ├──────→ Write Back
     │
Memory Data
```

---

# 🔧 Hazard Handling

One of the important goals of this project is demonstrating how hazards are handled in a pipelined processor.

## Data Forwarding

A pipeline can encounter a situation where an instruction needs a result that has not yet been written back to the register file.

For example:

```text
ADD  x3, x1, x2
SUB  x4, x3, x1
```

The `SUB` instruction needs `x3` immediately after the `ADD` produces it.

Instead of waiting for the value to reach the register file, the processor forwards the result directly from a later pipeline stage.

```text
             ┌───────────────┐
             │   EX/MEM      │
             │ ALU Result    │
             └───────┬───────┘
                     │
                     │ Forward
                     ▼
                  ┌─────┐
                  │ ALU │
                  └─────┘
```

The `forwarding_unit.sv` module determines whether the ALU operands should come from:

```text
00 → ID/EX register
10 → EX/MEM register
01 → MEM/WB register
```

EX/MEM forwarding has higher priority than MEM/WB forwarding.

---

## Load-Use Hazard Detection

Forwarding alone cannot immediately resolve every hazard.

For example:

```text
LW   x5, 0(x1)
ADD  x6, x5, x2
```

The value loaded from memory is not available soon enough for the following instruction.

The `hazard_unit.sv` detects this condition and generates:

```text
pc_write      = 0
if_id_write   = 0
control_stall = 1
```

This effectively:

1. Stops the PC
2. Holds the IF/ID pipeline register
3. Inserts a bubble into the ID/EX pipeline

After the required stall, execution continues normally.

---

# 📁 Project Structure

```text
RISC_PROCESSOR/
│
├── rtl/
│   ├── alu.sv
│   ├── decoder.sv
│   ├── register_file.sv
│   ├── immediate_gen.sv
│   ├── instruction_memory.sv
│   ├── data_memory.sv
│   ├── pc.sv
│   │
│   ├── if_id.sv
│   ├── id_ex.sv
│   ├── ex_mem.sv
│   ├── mem_wb.sv
│   │
│   ├── forwarding_unit.sv
│   ├── hazard_unit.sv
│   │
│   └── risc_processor.sv
│
├── tb/
│   └── risc_processor_tb.sv
│
└── README.md
```

RTL Modules

| Module                  | Purpose                                     |
| ----------------------- | ------------------------------------------- |
| `risc_processor.sv`     | Top-level processor/datapath                |
| `pc.sv`                 | Program Counter                             |
| `instruction_memory.sv` | Instruction storage                         |
| `decoder.sv`            | Instruction decoding and control generation |
| `register_file.sv`      | 32-register register file                   |
| `immediate_gen.sv`      | Immediate value generation                  |
| `alu.sv`                | Arithmetic and logical operations           |
| `data_memory.sv`        | Load/store memory                           |
| `if_id.sv`              | IF/ID pipeline register                     |
| `id_ex.sv`              | ID/EX pipeline register                     |
| `ex_mem.sv`             | EX/MEM pipeline register                    |
| `mem_wb.sv`             | MEM/WB pipeline register                    |
| `forwarding_unit.sv`    | Data forwarding logic                       |
| `hazard_unit.sv`        | Load-use hazard detection                   |

---

# Verification

The processor is verified using a SystemVerilog testbench and **Verilator**.

The instruction memory contains a sequence of test instructions including:

```assembly
ADDI x1, x0, 10
ADDI x2, x0, 5
ADD  x3, x1, x2
SUB  x4, x3, x1
AND  x5, x1, x2
OR   x6, x1, x2
SW   x1, 0(x0)
LW   x7, 0(x0)
```

Expected register results include:

```text
x1 = 10
x2 = 5
x3 = 15
x4 = 5
x5 = 0
x6 = 15
x7 = 10
```

The load/store test verifies that the value written to data memory can subsequently be loaded back into a register.

---

# 🖥️ Simulation

This project uses **Verilator** for RTL simulation.

From the project root:

```bash
cd ~/RISC_PROCESSOR
```

Compile the complete design and testbench:

```bash
rm -rf obj_dir

verilator --binary \
--top-module risc_processor_tb \
rtl/*.sv \
tb/risc_processor_tb.sv
```

Run the generated simulation:

```bash
./obj_dir/Vrisc_processor_tb
```

A successful simulation produces register results followed by:

```text
========================================
          TEST COMPLETE
========================================
```

---

#  Instruction Support

The current implementation supports a basic RISC-V instruction subset.

### Immediate Instructions

```assembly
ADDI
```

### Register-Register Instructions

```assembly
ADD
SUB
AND
OR
XOR
```

# Memory Instructions

```assembly
LW
SW
```

The architecture is designed so that additional RISC-V instructions can be added by extending the decoder, immediate generator, ALU, and required datapath/control signals.

---

# Concepts Demonstrated

This project provides practical implementation experience with:

* RTL design
* SystemVerilog
* RISC-V architecture
* CPU datapath design
* Five-stage pipelining
* Pipeline registers
* ALU design
* Register files
* Instruction decoding
* Immediate generation
* Memory interfaces
* Control signals
* Data hazards
* Forwarding
* Pipeline stalls
* Bubble insertion
* Hardware verification
* Verilator simulation

---

# 🛠️ Tools & Technologies

**Hardware Description Language**

* SystemVerilog

**Architecture**

* RISC-V
* 32-bit datapath
* 5-stage pipeline

**Simulation**

* Verilator

**Development Environment**

* VS Code
* macOS / Terminal

---

 Future Improvements

Possible extensions to make the processor more complete include:

* [ ] Branch instructions
* [ ] Jump instructions
* [ ] Branch hazard handling
* [ ] More RISC-V instructions
* [ ] CSR support
* [ ] Exception handling
* [ ] Interrupt support
* [ ] Better instruction-memory initialization
* [ ] Automated regression testing
* [ ] Waveform generation and analysis
* [ ] FPGA implementation
* [ ] Synthesis and timing analysis
* [ ] Formal verification
* [ ] Cache implementation

---

Learning Objective

The main objective of this project is to move beyond simply writing HDL modules and understand how those modules interact to form a functioning processor.

The project demonstrates the complete flow from:

```text
Instruction
     ↓
Fetch
     ↓
Decode
     ↓
Register Read
     ↓
Execute
     ↓
Memory Access
     ↓
Write Back
```

while handling the timing challenges introduced by pipelining.

---

Project Status

**Status:** Functional RTL simulation

The processor successfully executes the implemented instruction sequence and demonstrates arithmetic operations, logical operations, memory access, data forwarding, and pipeline hazard handling.

This project is intended as an educational RTL/VLSI implementation and can be extended toward a more complete RISC-V processor.

---

Why This Project?

A pipelined processor combines several important concepts in digital design and VLSI:

> **Datapath + Control + Pipelining + Hazard Handling + Verification**

Building these components from scratch provides practical experience with the same fundamental concepts used in larger RTL design projects.

---

Author

**Debarpita Mukherjee**

B.Tech — Electronics & Communication Engineering

Interested in:

* RTL Design
* VLSI
* Digital Design
* Computer Architecture
* Verilog/SystemVerilog
* RISC-V
* Hardware Verification

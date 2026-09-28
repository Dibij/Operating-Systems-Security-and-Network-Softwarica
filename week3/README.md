# Week 3: Process Lifecycles, OS Interaction & Memory Management

This module explores how the Linux operating system kernel schedules, identifies, and manages process execution and memory spaces.

## Lab Directory Index

### 📁 [Lab 3: Investigating Process Lifecycles & OS Interaction](./)
- Focus: Process IDs (`getpid()`), Parent PIDs (`getppid()`), background jobs (`&`), process monitoring (`ps aux`), and exit code handling (`$?`).
- Files:
  - `task1_alive.c`: Long-running process simulation with sleep cycles.
  - `task2_identity.c`: Kernel system calls to query process hierarchy.
  - `task3_exit.c`: Exit status branching (`return 0` vs `return 1`).
  - `task4_input.c`: Standard input/output streams.
  - `task5_control.c`: Conditional process execution and exit code control.
- Report: [`lab3.docx`](./lab3.docx)

### 📁 [Lab 4: Data Types & OS Memory Management](./lab4/)
- Focus: Data type memory allocations across architectures (16-bit, 32-bit, 64-bit) and mapping virtual memory segments (Stack, Heap, BSS, Data, Text).
- Code: `lab1_datatypes.c`, `lab2_segments.c`, `heap_pointer_demo.c`.
- Report: [`lab4/lab4.docx`](./lab4/lab4.docx)

### 📁 [Lecture 4: Memory Segments Practicals](./lecture4/)
- Focus: Practical exploration of variable address space mapping and memory segment theory.
- Code & Notes: `task1.c`, `task2.c`, `knowledgecheck.txt`.

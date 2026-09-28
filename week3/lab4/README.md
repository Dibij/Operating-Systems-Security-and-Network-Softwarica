# Lab 4: Data Types and OS Memory Management

This directory contains programs demonstrating system data type sizing across architectures and mapping Linux process virtual memory segments (Stack, Heap, BSS, Data, Text).

## Source Files
- `lab1_datatypes.c`: Explores sizes of primitive C data types (`sizeof`) on 64-bit architecture.
- `lab2_segments.c`: Inspects runtime virtual memory addresses across Data, BSS, Heap, and Stack segments, calculating memory gaps.
- `heap_pointer_demo.c`: Demonstrates stack pointer allocation pointing to dynamically allocated heap memory.

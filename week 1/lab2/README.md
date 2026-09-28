# Lab 2: C Programming Basics & GCC Compilation Stages

This lab explores the internal compilation pipeline of the GNU Compiler Collection (GCC) and basic C input/output operations.

## Key Exercises
1. **The Four Stages of Compilation**:
   - `hello.c`: Original C source file.
   - `hello.i`: Preprocessed C output (`gcc -E`).
   - `hello.s`: x86-64 assembly instructions (`gcc -S`).
   - `hello.o`: Relocatable ELF machine object file (`gcc -c`).
   - `hello`: Final executable binary produced by the linker.
2. **Exit Status & Operating System Feedback**:
   - `exit_status.c`: Demonstrating success (`return 0`) and error codes (`return 1`) inspected via `echo $?`.
   - `return_fifty.c`: Returning custom exit code `50`.
3. **Formatted I/O**:
   - `user_input.c`: Reading and printing numeric input.
   - `user_info.c`: Handling strings (`%s`), integers (`%d`), and floating-point (`%f`) inputs.

## Deliverable
- [`lab2.docx`](./lab2.docx): Comprehensive laboratory report with terminal screenshots and Knowledge Check solutions.

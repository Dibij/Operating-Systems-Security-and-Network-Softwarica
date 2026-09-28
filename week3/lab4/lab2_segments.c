#include <stdio.h>
#include <stdlib.h>

// Global variables
int global_var = 150; // Data segment (initialized global)
int bss_var;          // BSS segment (uninitialized global)

int main() {
    int local_var = 30;          // Stack segment (local variable)
    static int local_static = 20;// Data segment (static initialized variable)

    // Dynamically allocated memory on the Heap
    int *heap_var = (int *)malloc(sizeof(int));
    if (heap_var == NULL) {
        perror("malloc failed");
        return 1;
    }
    *heap_var = 500;

    printf("....... Variable Addresses Across Memory Segments .......\n\n");
    printf("global_var (Data Segment):         %p\n", (void *)&global_var);
    printf("local_static (Data Segment):       %p\n", (void *)&local_static);
    printf("bss_var (BSS Segment):             %p\n", (void *)&bss_var);
    printf("*heap_var (Heap Segment - Data):   %p\n", (void *)heap_var);
    printf("heap_var ptr (Stack - Pointer):    %p\n", (void *)&heap_var);
    printf("local_var (Stack Segment):         %p\n", (void *)&local_var);

    // Difference between stack and heap addresses
    unsigned long stack_addr = (unsigned long)&local_var;
    unsigned long heap_addr = (unsigned long)heap_var;
    unsigned long diff = (stack_addr > heap_addr) ? (stack_addr - heap_addr) : (heap_addr - stack_addr);
    printf("\nAddress difference between Stack and Heap: %lu bytes (0x%lx)\n", diff, diff);

    free(heap_var);
    return 0;
}

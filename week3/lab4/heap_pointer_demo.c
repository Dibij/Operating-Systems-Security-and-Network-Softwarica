#include <stdio.h>
#include <stdlib.h>

int main() {
    int *forheap; // Declare pointer (lives on Stack)
    forheap = (int *)malloc(sizeof(int)); // Allocate memory on Heap
    if (forheap == NULL) {
        perror("malloc failed");
        return 1;
    }

    *forheap = 30; // Store value in allocated heap memory

    printf("Address of pointer (STACK): %p\n", (void *)&forheap);
    printf("Address of data (HEAP):     %p\n", (void *)forheap);
    printf("Value stored:               %d\n", *forheap);

    free(forheap);
    return 0;
}

// Malloc(),Calloc(),Realloc() and Free()
// Author: REET

/*
In DMA,the memory is allocated at runtime
from the heap segment.
We need to include <stdlib.h>.
We have 4 functions to achieve this task.

malloc() : stands for memory allocation.
It reserves a block of memory with the
given amount of bytes.
The return value is a void pointer to the
allocated space.
Therefore, it needs to be casted to the
appropriate type.
If the space is insufficient, allocation
of memory fails and it returns a NULL
pointer.
All the values at allocated memory are
initialized to garbage values.
SYNTAX : ptr = (ptr-type*) malloc(size
_in_bytes)

calloc() :stands for contiguos allocation
Properties similar to malloc() except,
It reserves n blocks of memory with the
given amount of bytes.
All the values at allocated memory are
initialized to 0.
SYNTAX : ptr = (ptr-type*) calloc(n, size
_in_bytes)

realloc() : stands for reallocation
If the dynamically allocated memory is
insufficient we can later change it using
realloc().
SYNTAX : ptr = (ptr-type*) realloc(ptr,
new_size_in_bytes)

free() : used to free allocated space
If the dynamically allocated memory is
not required anymore, we can free it 
using free() function.
This will free the memory being used by
the program in the heap.
SYNTAX : free(ptr)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n;

    printf("How many numbers do you want to be printed ?\n");
    scanf("%d", &n);
    printf("Kindly enter %d numbers.\n", n);

    // Use of malloc()
    // ptr = (int *)malloc(5 * sizeof(int));

    //Use of calloc()
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Entered Numbers are : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // Free Dynamically Used Memory
    free(ptr);
    printf("Memory Freed Successfull.\n");

    // Use of realloc()
    printf("How many new numbers do you want to be printed now?\n");
    scanf("%d", &n);
    printf("Kindly enter %d new numbers.\n", n);

    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Entered New Numbers are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    printf("Dynamic Memory Re-allotment successfull.\n");

    // Free Dynamically Used Memory
    free(ptr);
    printf("Memory Freed Successfull.\n");

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
How many numbers do you want to be printed ?
5 
Kindly enter 5 numbers.
1
2
3
4
5
Entered Numbers are : 
1
2
3
4
5
Memory Freed Successfull.
How many new numbers do you want to be printed now?
8 
Kindly enter 8 new numbers.
2
3
4
55
6
8
6
1
Entered New Numbers are : 
2
3
4
55
6
8
6
1
Dynamic Memory Re-allotment successfull.
Memory Freed Successfull.
*/
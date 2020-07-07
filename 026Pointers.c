// Pointers in C
// Author: REET
/*
It is also a data type.
Stores the address of any other variable.
Size depends on architecture. Ex 2 bytes for 32 bit.
Can be declared using * (asterisk symbol).
Null Pointer: A pointer that is not assigned any value but 
NULL.
We can use it to initialize a pointer variable when that pointer
variable isn't assigned any valid memory address yet.
int* ptr = NULL;
*/

#include <stdio.h>

int main()
{

    printf("Let's learn about Pointers in C\n");
    int a = 76;
    int *ptra = &a;
    printf("The value of a is: %d\n", a);
    printf("The value of a is: %d\n", *ptra);
    printf("The address of a is: %p\n", ptra);
    printf("The address of a is: %p\n", &a);
    printf("The address of pointer to a is: %p\n", &ptra);

    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
Let's learn about Pointers in C
The value of a is: 76
The value of a is: 76
The address of a is: 0x7ffddd1c0aac
The address of a is: 0x7ffddd1c0aac
The address of pointer to a is: 0x7ffddd1c0ab0
*/
// TypeDef in C
// Author: REET

/*
SYNTAX : typedef <name> <alias_name>
*/

#include <stdio.h>

int main()
{

    // typedef unsigned long ul;
    // ul l1, l2, l3;

    // int *a, b; It creates pointer "a" and int "b".
    typedef int* intpointer;
    intpointer a,b; // It creates pointer "a" & "b".
    int c = 89;
    a = &c;
    b = &c;

    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 

*/
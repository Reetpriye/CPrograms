// For Loop Example
// Author: REET

#include <stdio.h>

int main()
{

    int i = 1, j = 1;
    for (; i <= 5; i++)
    {
        printf("%d %d\n", i, j);
    }

/*
Loop termination condition is always last one.
It is optional. You just need break statement.
Expression 2 can perform the task of Exp1 and Exp3.
Can pass zero(false) or non zero(true) value in Exp2.
*/

    for (; i <= 5, j <= 4; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
1 1
2 1
3 1
4 1
5 1
6 1
7 2
8 3
9 4
*/
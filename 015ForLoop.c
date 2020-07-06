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


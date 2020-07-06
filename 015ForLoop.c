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
*/

    for (; i <= 5, j <= 4; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}


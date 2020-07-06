// Format specifiers
// Author: REET

/*
%c for char
%d for integer
%f for decimal
%l for long integer
%lf for double integer
%Lf for long double integer
*/

#include <stdio.h>

int main()
{

    int a = 8;
    float b = 7.333;
    printf("The value of a is %d and the value of b is %f\n", a, b);
    printf("%1.4f\n",b);
    printf("%2.4f\n",b);
    printf("%3.4f\n",b);
    printf("%4.4f\n",b);
    printf("%5.4f\n",b);
    printf("%6.4f no offset\n",b);
    printf("%7.4f 1 space offset\n",b);
    printf("%8.4f 2 space offset on left\n",b);
    printf("%-8.4f2 space offset on right\n",b);

    return 0;
}
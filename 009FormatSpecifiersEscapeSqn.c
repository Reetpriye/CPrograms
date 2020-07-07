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

/*
\a for alarm or beep
\b for backspace
\f for form feed
\n for new line
\r for carriage return
\t for tab horizontal
\v for tab vertical
\\ for backslash
\' for single quote
\"" for double quote
\? for question mark
\nnn for octal number
\xhh for hexadecimal number
\0 for null
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

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
The value of a is 8 and the value of b is 7.333000
7.3330
7.3330
7.3330
7.3330
7.3330
7.3330 no offset
 7.3330 1 space offset
  7.3330 2 space offset on left
7.3330  2 space offset on right
*/
// Variables Naming Convention & Data Types
// Author: REET

/* 
Can start with alphabets, digits, and 
underscore. 
Can't start with a digit.
No whitespaces allowed.
ex-: valid: int ravi, float ravi123, 
     char _ravi232
     invalid: int $ravi, int 77ravi, 
     char long 
*/

/*
For 32 bit architecture,
char: 1 byte
signed char: 1 byte
unsigned char: 1 byte
short: 2 bytes
signed short: 2 bytes
unsigned short: 2 bytes
int: 2 bytes
signed int: 2 bytes
unsigned int: 2 bytes
short int: 2 bytes
signed short int: 2 bytes
unsigned short iny: 2 bytes
long int: 4 bytes
signed long int: 4 bytes
unsigned long int: 4 bytes
float: 4 bytes
double: 8 bytes
long double: 10 bytes
*/

#include <stdio.h>

int main()
{

    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(long double));

    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
1
4
4
8
16
*/

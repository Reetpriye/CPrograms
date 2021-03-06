// TypeCasting in C
// Author: REET

/*
Synatx: (type) value
*/
#include <stdio.h>

int main()
{

    int a = 3;
    float b = 54;
    float c = 54/5; 
    // Any operation between int and int 
    // will result in int
    float d = (float) 54/5;
    printf("The value of a is : %d\n", a);
    printf("The value of b is : %d\n", (int)b);
    printf("The value of b is : %0.02f\n", c);
    printf("The value of b is : %0.02f\n", d);

    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
The value of a is : 3
The value of b is : 54
The value of b is : 10.00
The value of b is : 10.80
*/
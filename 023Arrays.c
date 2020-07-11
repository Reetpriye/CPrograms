// Arrays in C
// Author: REET

/*
Items are stored in contiguos memory 
locations.
Can also be collection of derived data 
types, such as pointers, structures, etc.
1D arrays are also known as Vector.
Each element of an array is of same size.
Disadvantages: Poor complexity of 
insertion and deletion operation.
If there is enough space available but 
not in contiguous manner, then you'll not
be able to initialize an array.
*/

#include <stdio.h>

int main()
{

    int marks[2][4] = {{2, 4, 6, 8}, {4, 8, 6, 12}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
2 4 6 8 
4 8 6 12 
*/
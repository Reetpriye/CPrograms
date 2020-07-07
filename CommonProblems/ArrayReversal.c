// Array reversal using for loop
// Author: REET

#include <stdio.h>

void arrayRev(int arr[])
{   
    printf("Reversed Array is : { ");
    for (int i = 8; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arrayRev(arr);
    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
Reversed Array is : { 9 8 7 6 5 4 3 2 1 }
*/
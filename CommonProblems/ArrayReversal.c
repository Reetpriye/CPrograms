// Array reversal using for loop
// Author: REET

#include <stdio.h>

void arrayRev(int arr[])
{
    for (int i = 8; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arrayRev(arr);
    return 0;
}
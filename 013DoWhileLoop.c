// Do While Loop Example
// Author: REET

#include <stdio.h>

int main()
{
    int num, j=1;
    printf("Enter a Number: \n");
    scanf("%d", &num);
    printf("The numbers are:\n");
    do
    {
        printf("%d\n", j);
        j++;
    } while (j <= num);

    return 0;
}
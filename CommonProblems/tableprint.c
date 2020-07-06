// Print Table of the number inputted by the user
// Author: REET

#include <stdio.h>

int main()
{

    int num, i;
    printf("Enter the number you want table of:\n");
    scanf("%d",&num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }

    return 0;
}
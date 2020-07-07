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

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
Enter the number you want table of:
6
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60
*/
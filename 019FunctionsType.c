// Functions Type
// Author: REET

#include <stdio.h>

// 1. Without arguments and without return value
void printravi()
{
    printf("Ravi\n");
}

// 2. Without arguments and with return value
int takenum()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    return num;
}

// 3. With arguments and without return value
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
}

// 4. With arguments and with return value
int sum(int a, int b)
{
    return a + b;
}

//Main function
int main()
{
    int c = takenum();
    int d = sum(7, 4);
    printf("The entered number is : %d\n", c);
    printf("The sum is : %d\n", d);
    printstar(40);
    printravi();
    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
Enter the number:
4
The entered number is : 4
The sum is : 11
****************************************
Ravi
*/
// Fibonacci Program to print all numbers Using Recursion
// Author: REET

#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int num;
    printf("Enter the length of Fibonacci series you want\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
        printf("%d ", fib(i));
    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
(.text+0x20): undefined reference to `main'
collect2: error: ld returned 1 exit status
*/
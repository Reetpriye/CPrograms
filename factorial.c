// Factorial using recursion
// Author: REET

#include <stdio.h>

long double fact(long double n)
{
    if (n == 1 || n == 0) return 1;
    else return n * fact(n - 1);
}
int main()
{
    long double num, sum;
    printf("Enter the number you want factorial of:\n");
    scanf("%Lf", &num);
    sum = fact(num);
    printf("Factorial of %.0Lf is %.0Lf\n", num, sum);
    return 0;
}

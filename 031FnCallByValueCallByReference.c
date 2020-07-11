// Function Invoke Types
// Author: REET

#include <stdio.h>

int swapbycall(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("The value of X using by call invoke method : %d\n", x);
    printf("The value of Y using by call invoke method : %d\n", y);
}

int swapbyreference(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;

    printf("The value of X using by reference invoke method : %d\n", *x);
    printf("The value of X using by reference invoke method : %d\n", *y);
}

int main()
{

    int a, b;
    printf("Enter the value of A:\n");
    scanf("%d", &a);
    printf("Enter the value of B:\n");
    scanf("%d", &b);

    printf("The value of A : %d\n", a);
    printf("The value of B : %d\n", b);

    swapbycall(a, b);
    printf("The value of A after function call swapbycall : %d\n", a);
    printf("The value of B after function call swapbycall : %d\n", b);

    swapbyreference(&a, &b);
    printf("The value of A after function call swapbyreference : %d\n", a);
    printf("The value of B after function call swapbyreference : %d\n", b);

    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
Enter the value of A:
45
Enter the value of B:
32
The value of A : 45
The value of B : 32
The value of X using by call invoke method : 32
The value of Y using by call invoke method : 45
The value of A after function call swapbycall : 45
The value of B after function call swapbycall : 32
The value of X using by reference invoke method : 32
The value of X using by reference invoke method : 45
The value of A after function call swapbyreference : 32
The value of B after function call swapbyreference : 45
*/
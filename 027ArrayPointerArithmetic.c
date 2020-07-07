// Array and Pointer Arithmetic in C
// Author: REET

/*
There are four operators that can be used on a pointer.
[++, --, +, -]
Consider the declaration: arr[10];
arr ,by itself, without any index subscripting, can
be assigned to an integer pointer.
If arr is a pointer to arr[0] then arr + i is a pointer to arr[i].

Index  ------>  Pointer ------> Address
arr[0] ------>  arr ----------> 1000
arr[1] ------>  arr + 1 ------> 1004
arr[2] ------>  arr + 2 ------> 1008
arr[3] ------>  arr + 3 ------> 1012

Avoid using %d to print address.
Using format specifier %p instead.
*/

#include <stdio.h>

int main()
{

    int a = 34;
    int *ptra = &a;

    char b = 'a';
    char* ptrb = &b;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);
    printf("%d\n", ptra + 2);
    printf("%d\n", ptra + 3);
    printf("%d\n\n", ptra + 4);

    printf("Character Analysis Starts Here\n\n");

    printf("%d\n", ptrb);
    printf("%d\n", ptrb + 1);
    printf("%d\n", ptrb + 2);
    printf("%d\n", ptrb + 3);
    printf("%d\n\n", ptrb + 4);

    printf("Array Pointer Starts Here\n\n");

    int arr[] = {1,2,3,4,5,6,67};
    printf("Value at index 1 : %d\n", arr[0]);
    printf("Value at index 2 : %d\n", arr[1]);
    printf("Value at index 3 : %d\n", arr[2]);
    printf("Value at index 4 : %d\n", arr[3]);
    printf("Address of the first element of the array : %d\n", &arr[0]);
    printf("Address of the second element of the array : %d\n", &arr[1]);
    printf("Address of the third element of the array : %d\n", &arr[2]);
    printf("Address of the fourth element of the array : %d\n\n", &arr[3]);
    
    printf("Printing Address Using Only arr\n\n");
    printf("Address of the first element of the array : %d\n", arr);
    printf("Address of the second element of the array : %d\n", arr + 1);
    printf("Address of the third element of the array : %d\n", arr + 2);
    printf("Address of the fourth element of the array : %d\n", arr + 3);
    return 0;
}
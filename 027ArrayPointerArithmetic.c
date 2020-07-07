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

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
027ArrayPointerArithmetic.c: In function ‘main’:
027ArrayPointerArithmetic.c:32:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("%d\n", ptra);
             ~^
             %ls
027ArrayPointerArithmetic.c:33:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("%d\n", ptra + 1);
             ~^     ~~~~~~~~
             %ls
027ArrayPointerArithmetic.c:34:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("%d\n", ptra + 2);
             ~^     ~~~~~~~~
             %ls
027ArrayPointerArithmetic.c:35:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("%d\n", ptra + 3);
             ~^     ~~~~~~~~
             %ls
027ArrayPointerArithmetic.c:36:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("%d\n\n", ptra + 4);
             ~^       ~~~~~~~~
             %ls
027ArrayPointerArithmetic.c:40:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘char *’ [-Wformat=]
     printf("%d\n", ptrb);
             ~^
             %s
027ArrayPointerArithmetic.c:41:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘char *’ [-Wformat=]
     printf("%d\n", ptrb + 1);
             ~^     ~~~~~~~~
             %s
027ArrayPointerArithmetic.c:42:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘char *’ [-Wformat=]
     printf("%d\n", ptrb + 2);
             ~^     ~~~~~~~~
             %s
027ArrayPointerArithmetic.c:43:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘char *’ [-Wformat=]
     printf("%d\n", ptrb + 3);
             ~^     ~~~~~~~~
             %s
027ArrayPointerArithmetic.c:44:14: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘char *’ [-Wformat=]
     printf("%d\n\n", ptrb + 4);
             ~^       ~~~~~~~~
             %s
027ArrayPointerArithmetic.c:53:58: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the first element of the array : %d\n", &arr[0]);
                                                         ~^     ~~~~~~~
                                                         %ls
027ArrayPointerArithmetic.c:54:59: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the second element of the array : %d\n", &arr[1]);
                                                          ~^     ~~~~~~~
                                                          %ls
027ArrayPointerArithmetic.c:55:58: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the third element of the array : %d\n", &arr[2]);
                                                         ~^     ~~~~~~~
                                                         %ls
027ArrayPointerArithmetic.c:56:59: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the fourth element of the array : %d\n\n", &arr[3]);
                                                          ~^       ~~~~~~~
                                                          %ls
027ArrayPointerArithmetic.c:59:58: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the first element of the array : %d\n", arr);
                                                         ~^     ~~~
                                                         %ls
027ArrayPointerArithmetic.c:60:59: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the second element of the array : %d\n", arr + 1);
                                                          ~^     ~~~~~~~
                                                          %ls
027ArrayPointerArithmetic.c:61:58: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the third element of the array : %d\n", arr + 2);
                                                         ~^     ~~~~~~~
                                                         %ls
027ArrayPointerArithmetic.c:62:59: warning: format ‘%d’ expects argument of type int’, but argument 2 has type ‘int *’ [-Wformat=]
     printf("Address of the fourth element of the array : %d\n", arr + 3);
                                                          ~^     ~~~~~~~
                                                          %ls
-952216500
-952216496
-952216492
-952216488
-952216484

Character Analysis Starts Here

-952216501
-952216500
-952216499
-952216498
-952216497

Array Pointer Starts Here

Value at index 1 : 1
Value at index 2 : 2
Value at index 3 : 3
Value at index 4 : 4
Address of the first element of the array : -952216480
Address of the second element of the array : -952216476
Address of the third element of the array : -952216472
Address of the fourth element of the array : -952216468

Printing Address Using Only arr

Address of the first element of the array : -952216480
Address of the second element of the array : -952216476
Address of the third element of the array : -952216472
Address of the fourth element of the array : -952216468
*/
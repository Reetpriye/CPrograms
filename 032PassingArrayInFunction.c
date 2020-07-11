// Passing Array as an Argument to a Function
// Author: REET

#include <stdio.h>

void func1(int arr[][4])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value at Index [%d,%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }
}

void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {

        printf("The value at Index [%d] is %d\n", i, ptr[i]);
    }

    *(ptr + 2) = 444;
}

int main()
{

    int marks[][4] = {{2, 4, 5, 6},
                      {1, 3, 4, 6}};
    func1(marks);
    func2(marks);
    printf("\nAfter Changing Value in Func2 using Pointer Address\n\n");
    func2(marks);

    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
032PassingArrayInFunction.c: In function ‘main’:
032PassingArrayInFunction.c:35:11: warning: passing argument 1 of ‘func2’ from incompatible pointer type [-Wincompatible-pointer-types]
     func2(marks);
           ^~~~~
032PassingArrayInFunction.c:18:6: note: expected ‘int *’ but argument is of type int (*)[4]’
 void func2(int* ptr)
      ^~~~~
032PassingArrayInFunction.c:37:11: warning: passing argument 1 of ‘func2’ from incompatible pointer type [-Wincompatible-pointer-types]
     func2(marks);
           ^~~~~
032PassingArrayInFunction.c:18:6: note: expected ‘int *’ but argument is of type int (*)[4]’
 void func2(int* ptr)
      ^~~~~
The value at Index [0,0] is 2
The value at Index [0,1] is 4
The value at Index [0,2] is 5
The value at Index [0,3] is 6

The value at Index [1,0] is 1
The value at Index [1,1] is 3
The value at Index [1,2] is 4
The value at Index [1,3] is 6

The value at Index [0] is 2
The value at Index [1] is 4
The value at Index [2] is 5
The value at Index [3] is 6

After Changing Value in Func2 using Pointer Address

The value at Index [0] is 2
The value at Index [1] is 4
The value at Index [2] is 444
The value at Index [3] is 6
*/
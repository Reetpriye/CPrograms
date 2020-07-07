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
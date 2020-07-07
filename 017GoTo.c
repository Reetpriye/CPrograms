// GoTo Statement Example
// Author: REET

#include <stdio.h>

int main()
{

    /*
  Best use is to get out of nested loops.
  Also known as jump statement.
    label:  printf("We are inside the label\n");
    goto end;
    goto label;
    */
    
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. Enter 0 to exit.\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }

    end:
    return 0;
}


/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
0
Enter the number. Enter 0 to exit.
5
Enter the number. Enter 0 to exit.
3
Enter the number. Enter 0 to exit.
7
Enter the number. Enter 0 to exit.
0
*/
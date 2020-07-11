// Language Employee Manager Problem
// Based on Dynamic Memory Allocation
// Author: REET

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n, i = 0;
    while (i < 3)
    {
        printf("Employee %d : Enter numbers of characters in your Employee ID:\n", i + 1);
        scanf("%d", &n);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        getchar(); //Crucial so that newline input buffer
                   // gets consumed.
        printf("Enter your Employee ID:\n");
        scanf("%[^\n]%*c", ptr);
        printf("Employee ID of No. %d is %s\n", i + 1, ptr);
        free(ptr);
        i++;
    }

    return 0;
}
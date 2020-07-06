// Break & Continue statements
// Author: REET

#include <stdio.h>

int main()
{
    for (int i = 1, age; i < 10; i++)
    {

        printf("Loop Number: %d\nEnter your age:\n", i);
        scanf("%d", &age);
        if (age > 20)
        {
            break;
        }

        if (age < 10)
        {
            continue;
        }

        printf("You have not come across any continue statements.\n");
    }
    printf("You are out of the loop\n");
    return 0;
}

/*
Break: Just get out of the loop
Continue: Leave the rest of the code inside the loop
and do the next iteration.
*/
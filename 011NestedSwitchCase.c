// Nested Switch Case Example
// Author: REET

#include <stdio.h>

int main()
{

    int age, marks;
    printf("Enter your age:\n");
    scanf("%d", &age);

    switch (age)
    {
    case 4:
        printf("Enter your marks obtained\n");
        scanf("%d", &marks);
        printf("The age is 4\n");
        switch (marks)
        {
        case 45:
            printf("Your marks are 45\n");
            break;

        case 90:
            printf("Your marks are 90\n");
            break;

        default:
            printf("Your marks are not 45 or 90\n");
        }

        break;
    case 8:
        printf("The age is 8\n");
        break;
    case 12:
        printf("The age is 12\n");
        break;

    default:
        printf("The age is not 4,8 or 12\n");
    }

    return 0;
}
// Cash reward on passing exam's subject
// Author: REET

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sc, ma;
    printf("Are you pass in Maths? Write 1 for YES and 0 for NO\n");
    scanf("%d", &ma);
    printf("Are you pass in Science? Write 1 for YES and 0 for NO\n");
    scanf("%d", &sc);
    if (sc && ma)
    {
        printf("Your account will be credited with Rs.450.\n");
    }
    else if (sc)
    {
        printf("Your account will be credited with Rs.150.\n");
    }

    else if (ma)
    {
        printf("Your account will be credited with Rs.150.\n");
    }
    else
    {
        printf("Sorry! You are not entitled for any kind of prizes.\n");
    }

    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
Are you pass in Maths? Write 1 for YES and 0 for NO
1
Are you pass in Science? Write 1 for YES and 0 for NO
1
Your account will be credited with Rs.450.
*/
// Basic HTML Parser
// Author: REET

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int ins = 0, index = 0; // Variable to track whether we are inside the tag
    for (index = 0; index < strlen(string); index++)
    {
        if (string[index] == '<')
        {
            ins = 1;
            continue;
        }

        else if (string[index] == '>')
        {
            ins = 0;
            continue;
        }

        if (ins == 0)
        {
            string[index] = string[ins];
            index++;
        }
    }
    string[index] = '\0';
};

int main()
{

    char string[] = "<h1>   My name is Reet    </h1>";

    printf("Before parsing HTML : %s\n", string);
    parser(string);
    printf("After parsing HTML : %s\n", string);

    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
Before parsing HTML : <h1>   My name is Reet    </h1>
After parsing HTML : <h1>< <M< <a<e<i< <e<t< < </h1>
*/
// Strings in C
// Author: REET

/*
String is not a data type.
We can express string as an array of character
ending with a null character(\0).
We can create a character array in the following ways:
char name [] = {'r','a','v','i','\0'};
char name [] = "ravi";
Taking string input from the user.
char str[52];
gets(str);
Printing string.
printf("%s",str);
puts(str);
*/

#include <stdio.h>

void printStr(char str[])
{
    int i;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{

    char str[34] = {'R', 'a', 'v', 'i'};
    printStr(str);
    // We can simply use puts() function to print string
    puts(str);
    // Printing using printf
    printf("%s\n", str);
    // Gets input from the user.
    printf("Enter your desired String\n");
    gets(str);
    printf("The string you entered is : \n");
    puts(str);
    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
034Strings.c: In function ‘main’:
034Strings.c:43:5: warning: implicit declaration of function ‘gets’; did you mean ‘fgets’? [-Wimplicit-function-declaration]
     gets(str);
     ^~~~
     fgets
/tmp/ccTe3RHn.o: In function `main':
034Strings.c:(.text+0xd7): warning: the `gets' function is dangerous and should not be used.
Ravi
Ravi
Ravi
Enter your desired String
sagar
The string you entered is : 
sagar
*/
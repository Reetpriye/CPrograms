// String Functions in C
// Author: REET

/*
strcat() : Used to concatenate or combine two given strings.
strlen() : strlen("Hello") -> 5.
strrev() : strrev("Ravi") -> "ivaR".
strcpy() : strcpy(s1,s2) -> Copies s1 to s2.
strcmp() : strcmp("sold","tight") -> Comparison a/c to ASCII difference.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Roshan";
    char s2[] = "Ravi";
    printf("s1 string is \"%s\"\n", s1);
    printf("s2 string is \"%s\"\n", s2);
    printf("s1 length is : %ld\n", strlen(s1));

    // printf("Lets reverse the string s1.\ns1 is now : \n");
    // puts(strrev(s1));

    /*
    I'm having issue with puts() and gets() function as it has
    already been deprecated.
    So unable to use strrev for now.
    */

    strcpy(s1, s2);
    printf("String copied from s2 to s1.\ns1 is now : %s\n", s1);

    return 0;
}
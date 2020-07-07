// Unions in C
// Author: REET

/*
Union is a user defined type(similar to structure).
In structure, each member has its own storage location,
whereas members of a union uses a single shared memory location.
This single share memory location is equal to size of its largest
data member. 

Example for more clarification.
struct student {
    float marks; //4 bytes
    int id; //4 bytes
    // 8 bytes in total gets allocated, 4 bytes for each
}

union student {
    float marks; //4 bytes
    int id; //4 bytes
    // 4 bytes of data shared between id and marks
}

*/
#include <stdio.h>
#include <string.h>

// Declaring union Student as a global variable.

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

/*
Other way to declare and define

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} s1;
*/


int main()
{
    union Student ravi;
   ravi.id = 1;
   ravi.marks = 45;
   ravi.fav_char = 'u';
   strcpy(ravi.name, "Reet Priye");

//    ravi.marks = 45;
//    ravi.fav_char = 'u';
//    strcpy(ravi.name, "Reet Priye");
//    ravi.id = 1;

//    ravi.id = 1;
//    ravi.fav_char = 'u';
//    strcpy(ravi.name, "Reet Priye");
//    ravi.marks = 45;

//    ravi.id = 1;
//    ravi.marks = 45;
//    strcpy(ravi.name, "Reet Priye");
//    ravi.fav_char = 'u';

/*
You will get different outputs.
*/

    printf("Ravi got %d marks\n", ravi.marks);
    printf("Ravi id is %d \n", ravi.id);
    printf("Ravi's favourite character is %c.\n", ravi.fav_char);
    printf("Ravi's new name is %s\n", ravi.name);

    return 0;
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
Ravi got 1952802130 marks
Ravi id is 1952802130 
Ravi's favourite character is R.
Ravi's new name is Reet Priye
*/
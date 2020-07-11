// Structures in C
// Author: REET

/*
Structures are user defined data types.
Structures are used to group data of 
different types together.

#### Declaring a structure.

## First way
struct Employee {
    int id;
    char name[43];
    float marks;
};
struct Employee e1, e2;

## Second way
struct Employee {
    int id;
    char name[43];
    float marks;
}, e1, e2;

#### Initializing a structure

## First way
struct Employee {
    int id;
    float marks;
};
int main() {
    struct Employee e1;
    e1.id = 12;
    e1.marks = 34.12;
}

## Second way
struct Employee {
    int id;
    float marks;
};
int main() {
    struct Employee e1 = {12, 34.12};
}

*/

#include <stdio.h>
#include <string.h>

// Declaring struct Student as a global variable.

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

/*
Other way to declare and define

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} raja, ravi, shubham;
*/


int main()
{
    struct Student raja, ravi, shubham;
    raja.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    raja.marks = 22.12;
    ravi.marks = 34.12;
    shubham.marks = 39.13;
    raja.fav_char = 'a';
    ravi.fav_char = 'b';
    shubham.fav_char = 'c';

    strcpy(ravi.name, "Reet Priye");
    printf("Ravi got %d marks\n", ravi.marks);
    printf("Ravi's new name is %s\n", ravi.name);

    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 
Ravi got 34 marks
Ravi's new name is Reet Priye
*/
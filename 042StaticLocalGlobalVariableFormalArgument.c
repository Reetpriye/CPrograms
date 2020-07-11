// Static, Local, Global Variables & 
// Formal arguments in C
// Author: REET

/*
#Scope: Scope is a region where variable
is declared and cannot be accessed from 
outside.

#Local Variable: Accessible only inside 
a function or a block. Can not be accessed
inside of some other function.

#Global Variable: Defined outside the main
function.
Accessible throughout the program.
If LV and GV both have same name, LV will
take precedence.

#Formal Arguments: These variables are 
treated as local variables within a 
function.
These variable take precedence over 
global variables.

#Static Variables: They have property of
preserving the variable
even if they go out of scope.
They preserve their value from previous 
state and not re-initialize itself.
If not explicitly declared, initialized to 
0.
In C,SV can only be initialized with 
constant literals.
*/

#include <stdio.h>

int func1(int n)
{
    static int i = 0;
    printf("The current value of static variable i is : %d\n", i);
    i++;
    return n + i;
}

int main()
{

    int a = 1;

    printf("The current value of variable b is : %d\n", a);

    func1(a);
    func1(a);
    func1(a);
    func1(a);
    func1(a);
    return 0;
}
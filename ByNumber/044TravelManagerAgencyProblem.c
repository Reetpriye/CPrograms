// Travel Manager Agency Problem Using Structure
// Author: REET

#include <stdio.h>
#define MAX_SIZE 80

int main()
{
    struct EmployeeDetails
    {
        char name[MAX_SIZE];
        int dlnumber;
        char route[MAX_SIZE];
        float kmsdrove;
    } e1, e2, e3, e4;

    for (int i = 1; i <= 4; i++)
    {
        printf("1st Employee. Enter Your Name :\n");
        scanf("%[^\n]%*c", e[i].name);
        // This way of getting input for me is far better.
        // fgets(e1.name, MAX_SIZE, stdin);
        printf("Kindly Provide us Your Driving License(DL) No. :\n");
        scanf("%d", &e[i].dlnumber);
        printf("Route on Which You're Going to Drive :\n");
        scanf("%[^\n]%*c", e[i].route);
        printf("How many Kms You already drove? :\n");
        scanf("%f", &e[i].kmsdrove);
    }

    for (int i = 1; i <= 4; i++)
    {
        printf("1st Employee Details: \n");
        printf("Name: %s\n", e[i].name);
        printf("DL No.: %d\n", e[i].dlnumber);
        printf("Route: %s\n", e[i].route);
        printf("Kms already covered: %0.02f\n", e[i].kmsdrove);
    }

    return 0;
}

/*
WARNING: Output may vary according to 
architecture type or input.
Output of the program : 

1st Employee. Enter Your Name :
reet
Kindly Provide us Your Driving License(DL) No. :
343
Route on Which You're Going to Drive :
How many Kms You already drove? :
3
2nd Employee. Enter Your Name :
Kindly Provide us Your Driving License(DL) No. :
353
Route on Which You're Going to Drive :
How many Kms You already drove? :
34
3rd Employee. Enter Your Name :
Kindly Provide us Your Driving License(DL) No. :
53
Route on Which You're Going to Drive :
How many Kms You already drove? :
43
4th Employee. Enter Your Name :
Kindly Provide us Your Driving License(DL) No. :
53
Route on Which You're Going to Drive :
How many Kms You already drove? :
34
1st Employee Details: 
Name: reet
DL No.: 343
Route: v
Kms already covered: 3.00
2nd Employee Details: 
Name: 
DL No.: 353
Route: 
Kms already covered: 34.00
3rd Employee Details: 
Name: ��L v
DL No.: 53
Route: 
Kms already covered: 43.00
4th Employee Details: 
Name: 
DL No.: 53
Route: jU
Kms already covered: 34.00
*/
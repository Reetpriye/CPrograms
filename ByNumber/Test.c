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

    printf("1st Employee. Enter Your Name :\n");
    scanf("%[^\n]%*c", e1.name);
    // This way of getting input for me is far better.
    // fgets(e1.name, MAX_SIZE, stdin);
    printf("Kindly Provide us Your Driving License(DL) No. :\n");
    scanf("%d", &e1.dlnumber);
    printf("Route on Which You're Going to Drive :\n");
    scanf("%[^\n]%*c", e1.route);
    printf("How many Kms You already drove? :\n");
    scanf("%f", &e1.kmsdrove);

    printf("2nd Employee. Enter Your Name :\n");
    scanf("%[^\n]%*c", e2.name);
    printf("Kindly Provide us Your Driving License(DL) No. :\n");
    scanf("%d", &e2.dlnumber);
    printf("Route on Which You're Going to Drive :\n");
    scanf("%[^\n]%*c", e2.route);
    printf("How many Kms You already drove? :\n");
    scanf("%f", &e2.kmsdrove);

    printf("3rd Employee. Enter Your Name :\n");
    scanf("%[^\n]%*c", e3.name);
    printf("Kindly Provide us Your Driving License(DL) No. :\n");
    scanf("%d", &e3.dlnumber);
    printf("Route on Which You're Going to Drive :\n");
    scanf("%[^\n]%*c", e3.route);
    printf("How many Kms You already drove? :\n");
    scanf("%f", &e3.kmsdrove);

    printf("4th Employee. Enter Your Name :\n");
    scanf("%[^\n]%*c", e4.name);
    printf("Kindly Provide us Your Driving License(DL) No. :\n");
    scanf("%d", &e4.dlnumber);
    printf("Route on Which You're Going to Drive :\n");
    scanf("%[^\n]%*c", e4.route);
    printf("How many Kms You already drove? :\n");
    scanf("%f", &e4.kmsdrove);

    printf("1st Employee Details: \n");
    printf("Name: %s\n", e1.name);
    printf("DL No.: %d\n", e1.dlnumber);
    printf("Route: %s\n", e1.route);
    printf("Kms already covered: %0.02f\n", e1.kmsdrove);

    printf("2nd Employee Details: \n");
    printf("Name: %s\n", e2.name);
    printf("DL No.: %d\n", e2.dlnumber);
    printf("Route: %s\n", e2.route);
    printf("Kms already covered: %0.02f\n", e2.kmsdrove);

    printf("3rd Employee Details: \n");
    printf("Name: %s\n", e3.name);
    printf("DL No.: %d\n", e3.dlnumber);
    printf("Route: %s\n", e3.route);
    printf("Kms already covered: %0.02f\n", e3.kmsdrove);

    printf("4th Employee Details: \n");
    printf("Name: %s\n", e4.name);
    printf("DL No.: %d\n", e4.dlnumber);
    printf("Route: %s\n", e4.route);
    printf("Kms already covered: %0.02f\n", e4.kmsdrove);

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
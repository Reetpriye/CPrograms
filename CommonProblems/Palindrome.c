// Palindrome Check using While loop
// Author: REET

#include <stdio.h>

int main()
{
	long int num, q, revnum = 0, rem;
	printf("Enter the No. to check whether it's palindrome or not?\n");
	scanf("%ld", &num);
	q = num;
	while (q != 0)
	{
		rem = q % 10;
		revnum = revnum * 10 + rem;
		q = q / 10;
	}
	if (revnum == num)
	{
		printf("It is a palindrome No.\n");
	}
	else
		printf("No! It's not a palindrome No.\n");
}

/*
WARNING: Output may vary according to architecture type or input.
Output of the program : 
Enter the No. to check whether it's palindrome or not?
454
It is a palindrome No.
*/
//Written in C language

#include <stdio.h>

	int main() {

	int i, sum=0;

	for(i=1; i<1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
		sum += i;
		}
	}
	
	printf("The sum is : %d\n",sum);
	return 0;
	}

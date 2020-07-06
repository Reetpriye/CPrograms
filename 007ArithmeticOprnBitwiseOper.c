// Arithmetic Operations & Bitwise Operator 
// Check Operator Precedence
// Author: REET

/*
Bitwise Operator
Exclusive OR
a xor b(a^b)
0^0 = 0
0^1 = 1
1^0 = 1
1^1 = 0
*/

/*
~ is the binary one's complement operator.
<< is the binary left shift operator.
>> is the binary right shift operator.s
*/

#include <stdio.h>

  int main() {

  int a = 0, b = 34;

  printf("a | b = %d\n", a || b);
  printf("a & b = %d\n", a && b);
  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  

  return 0;
}
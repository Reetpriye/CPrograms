#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    int* ptr;
    ptr = &a;
    printf("The address of %d:%p\n",a,ptr);
    return 0;
}

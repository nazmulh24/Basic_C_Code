/* 
Bitwise X-OR operator.
*/

#include<stdio.h>
int main()
{
    int a = 4, b = 3;   //Note: 3 in binary = 0000 0011
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After X-OR, a = %d, b = %d", a, b);
    return 0;
}
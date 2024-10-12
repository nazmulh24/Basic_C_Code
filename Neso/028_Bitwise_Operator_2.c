/*
Bitwise left shift operator.
Formula--- var * 2^(rightOperant)
*/

#include<stdio.h>
int main()
{
    char var = 3;   //Note: 3 in binary = 0000 0011
    printf("%d", var<<1);
    return 0;
}
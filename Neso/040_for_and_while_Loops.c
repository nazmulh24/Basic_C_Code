/*
syntax --- while loop
    while(expression)
    {
        Statement1;
        Statement2;
        Statement3;
        ...
        ...
        ...
    }

syntax --- for loop
    for(initialization; condition; increment/decrement)
    {
        Statements;
    }
*/

/*
#include<stdio.h>
int main()
{
    int i=10;
    while (i > 0)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=8; i>0; i--)
    {
        printf("%d\n", i);
    }
return 0;
}
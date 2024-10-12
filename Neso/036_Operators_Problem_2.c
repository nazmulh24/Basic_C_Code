#include<stdio.h>
int main()
{
    int a=1, b=1;
    int c = ++a || b++; //now, a=2, b will not evaluated accordint "Short circuit".
    int d = b-- && --a; //now, b=1(but in 4th line b=0), a = 2-1 = 1.
    printf("%d %d %d %d", d, c, b, a);
    return 0;
}
#include <stdio.h>
int main()
{
    int a=15, b=10, c;
    c = a++ - b;
    printf("%d %d\n", c, ++a);
    return 0;
}
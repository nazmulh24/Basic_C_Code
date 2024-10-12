#include <stdio.h>
int main()
{
    int c, a = 10, b;
    b = ++a;
    a = b;
    c = a;                // Added semicolon
    printf("C is %d", c); // Changed format specifier to %d for integer
    return 0;
}
#include <stdio.h>

int main()
{
    int x = 5;
    // int y = 10;
    int *pointer;
    pointer = &x;
    printf(" %d\n", x);
    printf(" %d\n", &x);
    printf(" %d\n", pointer);
    printf(" %d\n", *pointer);
    printf(" %d\n", &pointer);
    return 0;
}
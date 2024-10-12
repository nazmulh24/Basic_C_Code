#include <stdio.h>

int main()
{
    int x = 5, y=6, z=10;
    
    int *pointer;

    pointer = &x;
    printf(" %d\n", *pointer);
    pointer = &y;
    printf(" %d\n", *pointer);
    pointer = &z;
    printf(" %d\n", *pointer);
    pointer = NULL;
    printf(" %d\n", *pointer);
    return 0;
}
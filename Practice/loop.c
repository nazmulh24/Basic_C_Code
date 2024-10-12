#include <stdio.h>

int main()
{
    // for (int i = 2; i <= 32; i *= 2)
    // {
    //     printf("%d\n", i);
    // }

    int i=2;
    while(i<=32)
    {
        printf("%d\n", i);
        i=i*2;
    }
    return 0;
}
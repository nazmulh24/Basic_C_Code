#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i = 2;
    while (i < 10000)
    {
        printf("%d\n", i);
        i = i + N;
    }
    return 0;
}
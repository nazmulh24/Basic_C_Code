#include <stdio.h>

int main()
{
    int N, mul;
    scanf("%d", &N);
    for (int i = 1; i <= 10; i++)
    {
        mul = i * N;
        printf("%d x %d = %d\n", i, N, mul);
    }
    return 0;
}
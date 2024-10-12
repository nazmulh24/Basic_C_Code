#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        int j = i * i;
        int k = i * j;
        printf("%d %d %d\n", i, j, k);
    }
    return 0;
}

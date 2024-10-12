#include <stdio.h>
int main()
{
    int M, N;
    while (1)
    {
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0)
            break;
        int start = ((M > N) ? M : N), end = ((M > N) ? N : M), sum = 0;
        for (int i = end; i <= start; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}

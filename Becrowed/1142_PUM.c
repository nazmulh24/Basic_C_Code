#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1, j = 2, k = 3, s = 0; s < N; i += 4, j += 4, k += 4, s++)
    {
        printf("%d %d %d PUM\n", i, j, k);
    }
    return 0;
}

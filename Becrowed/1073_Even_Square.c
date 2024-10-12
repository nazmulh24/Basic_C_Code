#include <stdio.h>
int main()
{
    int N, i, square;
    scanf("%d", &N);
    for(i = 2; i <= N; i += 2) {
        square = i * i;
        printf("%d^2 = %d\n", i, square);
    }
    return 0;
}
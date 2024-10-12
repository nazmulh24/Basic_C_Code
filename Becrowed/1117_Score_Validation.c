#include <stdio.h>
int main()
{
    int i = 0;
    float N, X[3], avg;
    while (1)
    {
        scanf("%f", &N);
        if (N >= 0 && N <= 10)
        {
            X[i] = N;
            i++;
        }
        else
            printf("nota invalida\n");
        if (i > 1)
            break;
    }
    avg = (X[0] + X[1]) / 2;
    printf("media = %.2f\n", avg);
    return 0;
}

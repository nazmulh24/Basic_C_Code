#include <stdio.h>

int main()
{
    int N;
    float X, Y, Z, avg;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%f %f %f", &X, &Y, &Z);
        avg = (X * 2 + Y * 3 + Z * 5) / 10;
        printf("%.1f\n", avg);
    }
    return 0;
}
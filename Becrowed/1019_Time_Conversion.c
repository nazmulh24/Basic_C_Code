#include<stdio.h>
int main()
{
    int N, x, y, z;
    scanf("%d", &N);
    x = N / 3600;
    y = (N % 3600) / 60;
    z = N % 60;
    printf("%d:%d:%d\n", x, y ,z);
    return 0;
}
#include<stdio.h>
int main()
{
    int D, x, y, z;
    scanf("%d", &D);
    x = D / 365;
    y = (D % 365) / 30;
    z = (D % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", x, y, z);
    return 0;
}
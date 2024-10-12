#include<stdio.h>
int main()
{
    int a, b, c, d;
    float x, y, vpay;
    scanf("%d %d %f", &a, &b, &x);
    scanf("%d %d %f", &c, &d, &y);
    vpay = (b * x) + (d * y);
    printf("VALOR A PAGAR: R$ %0.2f\n", vpay);
    return 0;
}
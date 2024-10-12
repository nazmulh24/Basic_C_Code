#include<stdio.h>
int main()
{
    float A, B, C, Perimetro, Area;
    scanf("%f %f %f", &A, &B, &C);
    Perimetro = A+B+C;
    Area = ((A+B)*C)/2;
    if (A>0 && B>0 && C>0 && A+B>C && B+C>A && C+A>B)
        printf("Perimetro = %0.1f\n", Perimetro);
    else
        printf("Area = %0.1f\n", Area);
    return 0;
}
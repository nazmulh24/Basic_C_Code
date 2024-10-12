#include<stdio.h>
int main()
{
    double A, B, C, TRIANGULO, pi = 3.14159, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%lf %lf %lf", &A, &B, &C);
    TRIANGULO = (A*C)/2;
    CIRCULO = pi*C*C;
    TRAPEZIO = (A+B)*C/2;
    QUADRADO = B*B;
    RETANGULO = A*B;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
    return 0;
}
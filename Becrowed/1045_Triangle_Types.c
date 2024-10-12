#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, temp;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (B > A) {temp = A; A = B; B = temp;}
    if (C > A) {temp = A; A = C; C = temp;}
    if (C > B) {temp = B; B = C; C = temp;}
    if (A>0 && B>0 && C>0 && (A >= B+C)){
        printf("NAO FORMA TRIANGULO\n");
        if (A==B && B==C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A==B || B==C || A==C)
            printf("TRIANGULO ISOSCELES\n");
    }
    else if (A>0 && B>0 && C>0 && (A*A == B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
        if (A==B && B==C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A==B || B==C || A==C)
            printf("TRIANGULO ISOSCELES\n");
    }
    else if (A>0 && B>0 && C>0 && (A*A > B*B + C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
        if (A==B && B==C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A==B || B==C || A==C)
            printf("TRIANGULO ISOSCELES\n");
    }
    else if (A>0 && B>0 && C>0 && (A*A < B*B + C*C)){
        printf("TRIANGULO ACUTANGULO\n");
        if (A==B && B==C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A==B || B==C || A==C)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
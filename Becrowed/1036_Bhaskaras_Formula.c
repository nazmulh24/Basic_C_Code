#include<stdio.h>
#include<math.h>
int main()
{
    double A, B, C, E, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);
    E = ( B * B ) - ( 4 * A * C );
    R1 = (- B + sqrt( E )) / ( 2 * A );
    R2 = (- B - sqrt( E )) / ( 2 * A );
    if (A!=0 && E>0)
        printf("R1 = %0.5lf\nR2 = %0.5lf\n", R1, R2);
    else
        printf("Impossivel calcular\n");
    return 0;
}
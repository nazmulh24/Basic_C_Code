#include<stdio.h>
#include<math.h>
int main()
{
    double X;
    scanf("%lf", &X);
    if(X>=0 && X<100){
        double rounded = round(X);
        printf("%.0f\n", rounded);
    }else printf("Out of Constraints!\n");
    return 0;
}
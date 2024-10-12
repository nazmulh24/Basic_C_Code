#include<stdio.h>
int main()
{
    int X, Y;
    float Total;
    scanf("%d %d", &X, &Y);
    if (X==1)
        Total = 4.00*Y;
    else if (X==2)
        Total = 4.50*Y;
    else if (X==3)
        Total = 5.00*Y;
    else if (X==4)
        Total = 2.00*Y;
    else if (X==5)
        Total = 1.50*Y;
    printf("Total: R$ %0.2f\n", Total);
    return 0;
}
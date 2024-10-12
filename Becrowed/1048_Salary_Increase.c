#include<stdio.h>
int main()
{
    float x, a, b;
    int c;
    scanf("%f", &x);
    if ( x>0 && x<=400.00){
        a = x+(x*0.15);
        b = a - x;
        c = 15;
    }
    else if ( x>=400.01 && x<=800.00){
        a = x+(x*0.12);
        b = a - x;
        c = 12;
    }
    else if ( x>=800.01 && x<=1200.00){
        a = x+(x*0.10);
        b = a - x;
        c = 10;
    }
    else if ( x>=1200.01 && x<=2000.00){
        a = x+(x*0.07);
        b = a - x;
        c = 7;
    }
    else if (x>=2000.00){
        a = x+(x*0.04);
        b = a - x;
        c = 4;
    }
    printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %%\n", a, b, c);
    return 0;
}
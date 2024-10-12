#include<stdio.h>
int main()
{
    int number, hour;
    float aph, salary;
    scanf("%d", &number);
    scanf("%d", &hour);
    scanf("%f", &aph);
    salary = hour * aph;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %0.2f\n", salary);
    return 0;
}
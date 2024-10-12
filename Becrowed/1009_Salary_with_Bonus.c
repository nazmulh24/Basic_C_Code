#include<stdio.h>
int main()
{
    char name[15];
    double salary, vsold, tsalary;
    fgets(name, sizeof(name), stdin);
    scanf("%lf", &salary);
    scanf("%lf", &vsold);
    tsalary = salary + (vsold * 0.15);
    printf("TOTAL = R$ %0.2lf\n", tsalary);
    return 0;
}
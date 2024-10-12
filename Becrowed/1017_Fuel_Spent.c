#include<stdio.h>
int main()
{
    int time, speed;
    float Fuel;
    scanf("%d", &time);
    scanf("%d", &speed);
    Fuel = (float)(time*speed)/12;
    printf("%0.3f\n", Fuel);
    return 0;
}
#include<stdio.h>
int main()
{
    int start, end, hour;
    scanf("%d %d", &start, &end);
    if (end > start)
        hour = end - start;
    else
        hour = 24 - start + end;
    printf("O JOGO DUROU %d HORA(S)\n", hour);
    return 0;
}
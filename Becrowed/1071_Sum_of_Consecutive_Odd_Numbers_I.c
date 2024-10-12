#include<stdio.h>
int main()
{
    int i, X, Y, temp, N, sum = 0;
    scanf("%d %d", &X, &Y);
    if(X>Y){temp = X; X = Y; Y = temp;}
    //printf("%d %d\n\n", X, Y);
    if (X % 2 == 0) {X += 1; N = X;}
    else N = X + 2;
    for(i=N; i<Y; i+=2){
        //printf("%d\n", i);
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
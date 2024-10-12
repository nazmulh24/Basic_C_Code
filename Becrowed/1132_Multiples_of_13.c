#include <stdio.h>
int main()
{
    int X, Y, sum = 0;
    scanf("%d %d", &X, &Y);
    if (X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }
    for (int i = X; i <= Y; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

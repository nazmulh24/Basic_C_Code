#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (Y == 0)
            printf("divisao impossivel\n");
        // else if (X % Y == 0)
        // {
        //     int div = X / Y;
        //     printf("%d\n", div);
        // }
        else
        {
            float x=(float)X, y= (float)Y;
            float div = x / y;
            printf("%.1f\n", div);
        }
    }
    return 0;
}

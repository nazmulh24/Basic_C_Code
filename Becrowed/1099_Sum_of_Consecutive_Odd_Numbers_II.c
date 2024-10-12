#include <stdio.h>

int main()
{
    int N, X, Y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            int temp = Y;
            Y = X;
            X = temp;
        }
        int sum = 0;
        for (int j = X + 1; j < Y; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
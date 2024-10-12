#include <stdio.h>
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    int count = 1;
    while (count <= Y)
    {
        for (int i = 0; i < X; i++)
        {
            printf("%d ", count);
            count++;
            if (count > Y)
                break;
        }
        printf("\n");
    }
    return 0;
}

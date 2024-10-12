#include <stdio.h>

int main()
{
    int num[100], max = 0, position = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > max)
        {
            max = num[i];
            position = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", position);
    return 0;
}
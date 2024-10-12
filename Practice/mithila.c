#include <stdio.h>
int main()
{
    int a, b, c, max, midi, mini;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        max = a;
        if (b > c)
        {
            midi = b;
            mini = c;
        }
        else
        {
            midi = c;
            mini = b;
        }
    }
    else if (b > a && b > c)
    {
        max = b;
        if (a > c)
        {
            midi = a;
            mini = c;
        }
        else
        {
            midi = c;
            mini = a;
        }
    }
    else
    {
        max = c;
        if (a > b)
        {
            midi = a;
            mini = b;
        }
        else
        {
            midi = b;
            mini = a;
        }
    }
    printf("Maximum=%d, Medium=%d, Minimum=%d\n", max, midi, mini);
    return 0;
}
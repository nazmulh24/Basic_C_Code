#include <stdio.h>

int main()
{
    int n, sum = 0, a;
    // printf("Enter input : ");
    // scanf("%d", &n);
    a = 10;
    printf("%d", a);
    for (int i = 1; i <= 10; i++)
    {
        // sum = sum + i * i;
        // if (i == 5 || i == 8 || i == 9)
        printf("%d\n", i);
        goto a;
    }
    return 0;
}
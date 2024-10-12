#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    // Print upper part of the heart shape
    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Prints lower triangular part of the pattern
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

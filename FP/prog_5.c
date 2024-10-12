#include <stdio.h>
int isPrime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int rows;
    printf("Enter the number of rows for the prime number triangle: ");
    scanf("%d", &rows);
    int primeCount = 2;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            while (!isPrime(primeCount))
            {
                primeCount++;
            }
            printf("%d ", primeCount);
            primeCount++;
        }
        printf("\n");
    }
    return 0;
}

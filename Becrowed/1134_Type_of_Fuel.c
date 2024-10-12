#include <stdio.h>
int main()
{
    int N, alcohol = 0, gasoline = 0, diesel = 0;
    while (1)
    {
        scanf("%d", &N);
        if (N >= 1 && N <= 3)
        {
            switch (N)
            {
            case 1:
                alcohol++;
                break;
            case 2:
                gasoline++;
                break;
            case 3:
                diesel++;
                break;
            }
        }
        if (N == 4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);
    return 0;
}

#include <stdio.h>

int main()
{
    int N, amount;
    char type;
    scanf("%d", &N);
    int t_animal = 0, t_C = 0, t_R = 0, t_S = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &amount, &type);
        t_animal = t_animal + amount;
        switch (type)
        {
        case 'C':
            t_C = t_C + amount;
            break;
        case 'R':
            t_R = t_R + amount;
            break;
        case 'S':
            t_S = t_S + amount;
            break;
        }
    }
    printf("Total: %d cobaias\n", t_animal);
    printf("Total de coelhos: %d\n", t_C);
    printf("Total de ratos: %d\n", t_R);
    printf("Total de sapos: %d\n", t_S);
    printf("Percentual de coelhos: %.2f %%\n", (float)t_C / t_animal * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)t_R / t_animal * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)t_S / t_animal * 100);
    return 0;
}
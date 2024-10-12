#include <stdio.h>
int main()
{
    int v_scores = 0;
    double t_score = 0.0;
    while (v_scores < 2)
    {
        double score;
        scanf("%lf", &score);
        if (score >= 0 && score <= 10)
        {
            v_scores++;
            t_score += score;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    double average = t_score / 2.0;
    printf("media = %.2lf\n", average);
    int x;
    do
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);
    } while (x != 1 && x != 2);
    if (x == 2)
    {
        return 0;
    }
    // Loop for further calculations
    while (1)
    {
        v_scores = 0;
        t_score = 0.0;
        while (v_scores < 2)
        {
            double score;
            scanf("%lf", &score);
            if (score >= 0 && score <= 10)
            {
                v_scores++;
                t_score += score;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        average = t_score / 2.0;
        printf("media = %.2lf\n", average);
        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while (x != 1 && x != 2);
        if (x == 2)
        {
            break;
        }
    }
    return 0;
}

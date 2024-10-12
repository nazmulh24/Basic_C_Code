#include <stdio.h>
int main()
{
    int grenais = 0, interWins = 0, gremioWins = 0, draws = 0;
    while (1)
    {
        int interGoals, gremioGoals;
        scanf("%d %d", &interGoals, &gremioGoals);
        grenais++;
        if (interGoals > gremioGoals)
            interWins++;
        else if (gremioGoals > interGoals)
            gremioWins++;
        else
            draws++;
        printf("Novo grenal (1-sim 2-nao)\n");
        int response;
        scanf("%d", &response);
        if (response == 2)
            break;
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, interWins, gremioWins, draws);
    if (interWins > gremioWins)
        printf("Inter venceu mais\n");
    else if (gremioWins > interWins)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}

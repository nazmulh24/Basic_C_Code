#include<stdio.h>
int main()
{
    float N1, N2, N3, N4, Media ;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    Media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
    printf("Media: %0.1f\n", Media);
    if (Media >= 7.0)
        printf("Aluno aprovado.\n");
    else if (Media < 5)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        float Score;
        scanf("%f", &Score);
        float final_avg = (Media + Score) / 2;
        printf("Nota do exame: %.1f\n", Score);
        if(final_avg >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", final_avg);
    }
    return 0;
}
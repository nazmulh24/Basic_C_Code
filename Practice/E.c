#include <stdio.h>
int main()
{
    int A, B, T;
    scanf("%d %d %d", &A, &B, &T);
    int time = A;
    int tBiscuits = 0;
    while (time <= T + 0.5){
        tBiscuits += B;
        time += A;
    }
    printf("%d\n", tBiscuits);
    return 0;
}

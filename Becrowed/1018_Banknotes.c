#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", N);
    int notes[7] = {100, 50, 20, 10, 5, 2, 1};
    int num_notes = sizeof(notes) / sizeof(int);
    int counts[num_notes];
    for (int i = 0; i < num_notes; i++) {
        counts[i] = N / notes[i];
        N = N % notes[i];
    }
    for (int j = 0; j < num_notes; j++) {
        printf("%d nota(s) de R$ %d,00\n", counts[j], notes[j]);
    }
    return 0;
}
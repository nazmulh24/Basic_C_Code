#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int num_notes = sizeof(notes) / sizeof(int);
    int counts[num_notes];
    for (int i = 0; i < num_notes; i++) {
        counts[i] = N / notes[i];
        N = N % notes[i];
    }
    for (int i = 0; i < num_notes; i++) {
        printf("%d nota(s) de R$ %d,00\n", counts[i], notes[i]);
    }
    return 0
}
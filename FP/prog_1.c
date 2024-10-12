#include <stdio.h>

void main() {
    int i, j, n = 8, a[10];

    for (i = 1; i <= n; i++) {
        a[i] = 0;

        for (j = 1; j <= i; j++) {
            a[i] = a[i] + i + j;
        }

        printf("%d\n", a[i]);
    }
}

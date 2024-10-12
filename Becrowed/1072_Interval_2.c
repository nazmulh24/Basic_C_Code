#include <stdio.h>
int main()
{
    int N, X, i, in_range = 0, out_of_range = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &X);
        if(X >= 10 && X <= 20) in_range++;
        else out_of_range++;
    }
    printf("%d in\n%d out\n", in_range, out_of_range);
    return 0;
}
#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int result = -1;
    for (int i = A; i <= B; i++){
        if (i % C == 0){
            result = i;
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maxEbonyShots = c / a;
    int maxIvoryShots = c / b;
    for (int i = 0; i <= maxEbonyShots; i++){
        for (int j = 0; j <= maxIvoryShots; j++) {
            int damage = (i * a) + (j * b);
            if (damage == c) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
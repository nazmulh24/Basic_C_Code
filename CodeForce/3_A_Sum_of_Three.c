#include <stdio.h>
void find_triplet(int n)
{
    if (n % 3 == 0)
    {
        printf("NO\n");
        return;
    }
    int x = 1, y = 1, z = n - 2;
    if (x % 3 == 0)
    {
        x += 1;
        y += 1;
        z -= 2;
    }
    else if (y % 3 == 0)
    {
        y += 1;
        x += 1;
        z -= 2;
    }
    else if (z % 3 == 0)
    {
        z -= 1;
        x += 1;
        y += 1;
    }
    printf("YES\n%d %d %d\n", x, y, z);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        find_triplet(n);
    }
    return 0;
}

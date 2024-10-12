#include <stdio.h>
int main()
{
    int ar[3] = {3, 6, 9}, target;
    scanf("%d", &target);
    for (int i = 0; i < 3; i++)
    {
        if (ar[i] == target)
            printf("%d is available ", target);
    }
    return 0;
}

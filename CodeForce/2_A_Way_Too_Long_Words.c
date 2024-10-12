#include <stdio.h>
#include <string.h>
int main()
{
    int n, x;
    scanf("%d", &n); // (1 ≤ n ≤ 100)
    char word[n][102];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
        x = strlen(word[i]);
        if (x > 10)
            printf("%c%d%c\n", word[i][0], x - 2, word[i][x - 1]);
        else
            printf("%s\n", word[i]);
    }
    return 0;
}

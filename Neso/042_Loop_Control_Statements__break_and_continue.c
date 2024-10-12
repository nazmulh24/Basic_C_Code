/*
#include<stdio.h>
int main()
{
    //break
    int n;
    printf("Enter an Integer : ");
    scanf("%d", &n);
    while(n != 0)
    {
    if(n < 0)
        break;
    printf("Enter a number: ");
    scanf("%d", &n);
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    //continue
    int i, n=2;
    for(i=1; i<=20; i++)
    {
        if(i == n)
        {
            n = n+2;
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
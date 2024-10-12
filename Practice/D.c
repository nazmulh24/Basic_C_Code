#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N>=0 && N<=9999){
        printf("%04d\n",N);
    }else printf("Out of Constraints!\n");
    return 0;
}
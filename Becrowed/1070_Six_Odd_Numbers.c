#include <stdio.h>
int main() 
{
    int i, X;
    scanf("%d", &X);
    if (X % 2 == 0) {X += 1;}
    for(i=0; i<6; i++){
        printf("%d\n", X);
        X +=2;
    }
    return 0;
}
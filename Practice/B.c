#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if(A>=1 && A<=100 && B>=1 && B<=100){
        if(A<B){
            printf("%d\n", B-A+1);
        }else if(B<A){
            int X=B-A+1;
            if(X<=0) printf("0");
        }
    }else printf("Out of Constraints!\n");
    return 0;
}

#include<stdio.h>
int main()
{
    int x, y;
    printf("\nEnter Dividend number :");
    scanf("%d", &x);
    printf("Enter Divisor number :");
    scanf("%d", &y);
    if(y==0){
        printf("\nError\n\n");
    }else{
        int div=x/y;
        int remainder = x % y;
        printf("\nThe Divison number : %d\nThe Remainder number : %d\n\n", div, remainder);
    }
    return 0;
}
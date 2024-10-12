#include <stdio.h>
int main() 
{
    int num1, num2, num3, num4, num5;
    int evenCount = 0;
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if (num1 % 2 == 0) {evenCount++;}
    if (num2 % 2 == 0) {evenCount++;}
    if (num3 % 2 == 0) {evenCount++;}
    if (num4 % 2 == 0) {evenCount++;}
    if (num5 % 2 == 0) {evenCount++;}
    printf("%d valores pares\n", evenCount);
    return 0;
}

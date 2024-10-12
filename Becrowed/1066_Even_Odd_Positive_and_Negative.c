#include <stdio.h>
int main() 
{
    int num1, num2, num3, num4, num5;
    int evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if (num1 % 2 == 0) {evenCount++;}
    if (num2 % 2 == 0) {evenCount++;}
    if (num3 % 2 == 0) {evenCount++;}
    if (num4 % 2 == 0) {evenCount++;}
    if (num5 % 2 == 0) {evenCount++;}
    if (num1 % 2 != 0) {oddCount++;}
    if (num2 % 2 != 0) {oddCount++;}
    if (num3 % 2 != 0) {oddCount++;}
    if (num4 % 2 != 0) {oddCount++;}
    if (num5 % 2 != 0) {oddCount++;}
    if (num1 > 0) {posCount++;}
    if (num2 > 0) {posCount++;}
    if (num3 > 0) {posCount++;}
    if (num4 > 0) {posCount++;}
    if (num5 > 0) {posCount++;}
    if (num1 < 0) {negCount++;}
    if (num2 < 0) {negCount++;}
    if (num3 < 0) {negCount++;}
    if (num4 < 0) {negCount++;}
    if (num5 < 0) {negCount++;}
    printf("%d valor(es) par(es)\n", evenCount);
    printf("%d valor(es) impar(es)\n", oddCount);
    printf("%d valor(es) positivo(s)\n", posCount);
    printf("%d valor(es) negativo(s)\n", negCount);
    return 0;
}
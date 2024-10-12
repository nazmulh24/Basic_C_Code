#include <stdio.h>
int add(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}
int main()
{
    int num1, num2, X;
    scanf("%d %d", &num1, &num2);
    X = add(num1, num2);
    // X = num1 - ~num2 - 1; // 1's complement
    printf("%d", X);
    return 0;
}

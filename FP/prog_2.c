// What is the output when the following code fragments are executed:
#include <stdio.h>
// #include<string.h>
// int main()
// {
//     int x = (int)31.5 / (int)6.3;
//     printf("%d\n", x);
//     printf("Size=%d\n", sizeof("CSE"));
//     printf("Lenth=%d", strlen("CSE"));
// }


int main()
{
    int *pc, c;
    c = 22;
    printf("Address of c: %u\n", &c);
    printf("Value of c: %d\n", c);
    pc = &c;
    printf("Address of pointer pc: %u\n", pc);
    printf("Content of pointer pc: %d\n", *pc);
    *pc = 2;
    printf("Address of c: %u\n", &c);
    printf("Value of c: %d\n", c);
    int x, y=10, z;
    x=(y++)+2;
    z=(++y)-3;
    printf("%d %d %d", x,y, z);
    return 0;
}
// Assume the memory location is : 268678

/*
#include<stdio.h>
#define y 2
#define z 23
int main()
{
    int x = 2;
    switch(x)
    {
        case y: printf("number is 2");
            break;
        case z: printf("number is 23");
            break;
        default: printf("default case");
            break;
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int x=23;
    switch(x)
    {
        case 3+3: printf("choice 1");
            break;
        case 3+4*5: printf("choice 2");
            break;
        default: printf("default");
            break;
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    switch(x)
    {
        case 1: printf("number is 1");
            break;
        case 2: printf("number is 2");
            break;
        case 3: printf("number is 3");
            break;
        case 4: printf("number is 4");
            break;
        default: printf("default case");
            break;
    }
    return 0;
}

#include<stdio.h>

int fun1(){
    printf("Nazmul");
    return 1;
}

int fun2(){
    printf("Hossain");
    return 1;
}

int main()
{
    int a;
    a = fun1() + fun2();
    printf("%d\n", a);
    return 0;
}
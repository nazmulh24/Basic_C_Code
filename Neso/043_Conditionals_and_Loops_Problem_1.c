
//how many times will "Hello world" be printed in the below program.

#include<stdio.h>
int main()
{
    int i=1024;
    for(; i; i>>=1)
        printf("Hello World\n");
    return 0;
}

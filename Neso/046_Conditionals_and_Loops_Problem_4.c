//What is the output of the following C program fragment?
//Assuming size of unsigned int is 4 bytes.

#include<stdio.h>
int main()
{
    unsigned int i = 500;
    while(i++ != 0);
    printf("%d", i);
    return 0;
}

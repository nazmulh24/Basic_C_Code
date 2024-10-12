// How many times will "Neso" be printed on the screen?
// Answer-- 0 times.

/*
#include<stdio.h>
int main()
{
    int i = -5;
    while(i <= 5)
    {
        if(i >= 0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("Neso");
    }
    return 0;
}
*/

//What is the output of the following C program fragment?

#include<stdio.h>
int main()
{
    int i = 0;
    for(printf("one\n"); i<3 && printf(""); i++)
    {
        printf("Hi!\n");
    }
    return 0;
}
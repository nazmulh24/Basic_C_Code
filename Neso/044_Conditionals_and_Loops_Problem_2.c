
// What is the output of the following C program fragment.

/*
#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<20; i++)
    {
        switch(i)
        {
            case 0: i += 5;   //there is no break..
            case 1: i += 2;
            case 5: i += 5;
            default: i += 4;
        }
        printf("%d\n", i);
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<20; i++)
    {
        switch(i)
        {
            case 0: i += 5;
            break;
            case 1: i += 2;
            break;
            case 5: i += 5;
            break;
            default: i += 4;
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}

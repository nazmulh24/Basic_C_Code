#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50], number;
    printf("Enter size of the array : ");
    scanf("%d", &number);
    printf("Enter Elements of the array : ");
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Entered element are : ");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < number; i++)
    {
        for (int j = i + 1; j < number; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < number; k++)
                {
                    a[k] = a[k + 1];
                }
                j--;
                number--;
            }
        }
    }
    printf("After deleting the duplicate element the Array is : ");
    for (int i = 0; i < number; i++)
    {
        printf("%d ", a[i]);
    }
}

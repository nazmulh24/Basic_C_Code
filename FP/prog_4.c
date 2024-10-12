#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int main()
{
    int numbers[MAX_SIZE], size = 0;
    FILE *file = fopen("sorting.txt", "r");
    if (!file)
    {
        printf("Error opening file 'sorting.txt'.\n");
        return 1;
    }
    while (fscanf(file, "%d", &numbers[size]) == 1 && size < MAX_SIZE)
        size++;
    fclose(file);
    qsort(numbers, size, sizeof(int), (int (*)(const void *, const void *))NULL);
    file = fopen("sorting.txt", "w");
    if (!file)
    {
        printf("Error opening file 'sorting.txt' for writing.\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
        fprintf(file, "%d ", numbers[i]);
    fclose(file);
    printf("Array sorted and written back to the file.\n");
    return 0;
}

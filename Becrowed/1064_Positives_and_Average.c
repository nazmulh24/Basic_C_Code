#include<stdio.h>
int main()
{
    float num[6], sum, avg;
    int i, count;
    count = 0;
    sum = 0.0;
    for(i=0; i<6; i++){
        scanf("%f", &num[i]);
        if(num[i] > 0){
            count++;
            sum += num[i];
        }
    }
    printf("%d valores positivos\n", count);
    if (count > 0){
        avg = sum / count;
        printf("%0.1f\n", avg);
    }
    return 0;
}
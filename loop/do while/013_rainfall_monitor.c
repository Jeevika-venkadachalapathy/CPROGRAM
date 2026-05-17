#include<stdio.h>
int main(){
    int total_days, i=0;
    int per_day_rainfall;
    int total_rainfall=0;
    scanf("%d",&total_days);
    do{
        scanf("%d",&per_day_rainfall);
        total_rainfall+=per_day_rainfall;
        i++;
    }
    while(i<total_days);
    printf("Total Rainfall: %d",total_rainfall);
    return 0;
}
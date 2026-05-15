#include<stdio.h>
int main(){
    int total_days,i=0;
    int per_day_consumed;
    int total_bottles=0;
    scanf("%d",&total_days);
    do{
        scanf("%d",&per_day_consumed);
        total_bottles+=per_day_consumed;
        i++;
    }
    while(i<total_days);
    printf("Total Bottles: %d",total_bottles);
    return 0;
}
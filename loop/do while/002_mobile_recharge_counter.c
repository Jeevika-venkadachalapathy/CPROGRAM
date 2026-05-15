#include<stdio.h>
int main(){
    int total_days,i=0;
    int per_day_amount;
    int total_amount=0;
    scanf("%d",&total_days);
    do{
        scanf("%d",&per_day_amount);
        total_amount+=per_day_amount;
        i++;
    }
    while(i<total_days);
    printf("Total Recharge: %d",total_amount);
    return 0;
}
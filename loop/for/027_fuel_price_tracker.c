#include<stdio.h>
int main(){
    int total_days;
    int fuel_price;
    int highest_price=0;
    int high_price_days=0;
    scanf("%d",&total_days);
    for(int i=0;i<total_days;i++){
        scanf("%d",&fuel_price);
        if(fuel_price>100){
            high_price_days++;
        }
        if(fuel_price>highest_price){
            highest_price=fuel_price;
        }
    }
    printf("Highest Price: %d\n",highest_price);
    printf("High Price Days: %d\n",high_price_days);
    return 0;
}
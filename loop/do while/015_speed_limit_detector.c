#include<stdio.h>
int main(){
    int total_times, i=0;
    int vehicle_speed;
    int overspeed_count=0;
    scanf("%d",&total_times);
    do{
        scanf("%d",&vehicle_speed);
        if(vehicle_speed>80){
            overspeed_count++;
        }
        i++;
    }
    while(i<total_times);
    printf("Overspeed Count: %d",overspeed_count);
}
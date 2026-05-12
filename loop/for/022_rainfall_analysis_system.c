#include<stdio.h>
int main(){
    int total_days,total_rainfall=0;
    int rainfall_per_day;
    int heavy_rain_days=0;
    scanf("%d",&total_days);
    for(int i=0;i<total_days;i++){
        scanf("%d",&rainfall_per_day);
        if(rainfall_per_day>50){
            heavy_rain_days++;
        }
        total_rainfall+=rainfall_per_day;
    }
    printf("Total Rainfall: %d\n",total_rainfall);
    printf("Heavy Rain Days: %d\n",heavy_rain_days);
    return 0;
}
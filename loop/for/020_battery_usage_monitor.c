#include<stdio.h>
int main(){
    int total_percent, per_hour;
    int hours,used_battery=0;
    scanf("%d",&total_percent);
    scanf("%d",&hours);
    for(int i=0;i<hours;i++){
        scanf("%d",&per_hour);
        used_battery+=per_hour;
    }
    printf("Remaining Battery: %d%%",total_percent - used_battery);
    return 0;
}


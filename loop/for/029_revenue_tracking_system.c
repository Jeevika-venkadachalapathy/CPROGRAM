#include<stdio.h>
int main(){
    int total_days;
    int per_day_revenue;
    int total_revenue=0;
    int target_achieved_days=0;
    scanf("%d",&total_days);
    for(int i=0;i<total_days;i++){
        scanf("%d",&per_day_revenue);
        if(per_day_revenue>50000){
            target_achieved_days++;
        }
        total_revenue+=per_day_revenue;
    }
    printf("Total Revenue: %d\n",total_revenue);
    printf("Target Days: %d\n",target_achieved_days);
    return 0;
}
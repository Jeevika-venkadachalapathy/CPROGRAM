#include<stdio.h>
int main(){
    int total_days, day_usage;
    int total_usage=0;
    int high_usage_days=0;
    scanf("%d",&total_days);
    for(int i=0;i<total_days;i++){
        scanf("%d",&day_usage);
        if(day_usage>2){
            high_usage_days++;
        }
        total_usage+=day_usage;
    }
    printf("Total Data: %d\n",total_usage);
    printf("High Usage Days: %d",high_usage_days);
    return 0;
}

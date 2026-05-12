#include<stdio.h>
int main(){
    int total_days, per_day_loss;
    int total_loss=0;
    int high_loss_days=0;
    scanf("%d",&total_days);
    for(int i=0;i<total_days;i++){
        scanf("%d",&per_day_loss);
        if(per_day_loss>100){
            high_loss_days++;
        }
        total_loss+=per_day_loss;
    }
    printf("Total Loss: %d\n",total_loss);
    printf("High Loss Days: %d\n",high_loss_days);
    return 0;
}
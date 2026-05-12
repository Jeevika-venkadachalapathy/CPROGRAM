#include<stdio.h>
int main(){
    int withdrawals;
    int withdrawals_amount,total_amount=0;
    scanf("%d",&withdrawals);
    for(int i=0;i<withdrawals;i++){
        scanf("%d",&withdrawals_amount);
        total_amount=total_amount+withdrawals_amount;
    }
    if(total_amount<=10000){
        printf("Approved");
    }
    else{
        printf("Limit Exceeded");
    }
    return 0;
}

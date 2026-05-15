#include<stdio.h>
int main(){
    int total_count;
    int amount, i=0;
    int total_deposit=0;
    scanf("%d",&total_count);
    do{
        scanf("%d",&amount);
        total_deposit+=amount;
        i++;
    }
    while(i<total_count);
    printf("Total Deposit: %d",total_deposit);
    return 0;
}
#include<stdio.h>
int main(){
    int Days, Balance;
    int i = 0;
    int D_Transaction;
    int low_days = 0;
    scanf("%d %d", &Days, &Balance);
    while(i < Days){
        scanf("%d", &D_Transaction);
        Balance = Balance + D_Transaction;
        if(Balance < 2000){
            low_days++;
        }
        i++;
    }
    printf("Final Balance: %d\n", Balance);
    printf("Low Balance Days: %d\n", low_days);
    return 0;
}
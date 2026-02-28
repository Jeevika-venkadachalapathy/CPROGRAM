#include <stdio.h>
int main(){
    float invest,buy,current;
    if(scanf("%f%f%f",&invest,&buy,&current)!=3||invest<=0||buy<=0||current<=0){
        printf("Invalid Input");
        return 0;
    }
    float shares=invest/buy;
    float value=shares*current;
    if(value>invest)
        printf("Profit: %.2f",value-invest);
    else if(value<invest)
        printf("Loss: %.2f",invest-value);
    else
        printf("No Profit No Loss");
    return 0;
}

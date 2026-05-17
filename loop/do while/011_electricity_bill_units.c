#include<stdio.h>
int main(){
    int total_days,consumed_units,i=0;
    int total_units=0;
    scanf("%d",&total_days);
    do{
        scanf("%d",&consumed_units);
        total_units+=consumed_units;
        i++;
    }
    while(i<total_days);
    printf("Total Units: %d",total_units);
    return 0;
}

#include<stdio.h>
int main(){
    int total_days;
    int per_day;
    int total_units=0;
    scanf("%d",&total_days);
    for(int i=0; i<total_days; i++){
        scanf("%d",&per_day);
        total_units+=per_day;
    }
    printf("Total Units: %d",total_units);
    return 0;
}
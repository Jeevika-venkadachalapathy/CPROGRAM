#include<stdio.h>
int main(){
    int passengers, total_collection=0;
    int passenger_fare;
    scanf("%d",&passengers);
    for(int i=0;i<passengers;i++){
        scanf("%d",&passenger_fare);
        total_collection+=passenger_fare;
    }
    printf("Total Collection: %d",total_collection);
    return 0;
}
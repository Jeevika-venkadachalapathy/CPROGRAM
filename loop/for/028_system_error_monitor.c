#include<stdio.h>
int main(){
    int total_hours;
    int error_per_hour;
    int total_errors=0;
    int critical_hours=0;
    scanf("%d",&total_hours);
    for(int i=0;i<total_hours;i++){
        scanf("%d",&error_per_hour);
        if(error_per_hour>50){
            critical_hours++;
        }
        total_errors+=error_per_hour;
    }
    printf("Total Errors: %d\n",total_errors);
    printf("Critical Hours: %d\n",critical_hours);
    return 0;
}
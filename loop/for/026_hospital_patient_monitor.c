#include<stdio.h>
int main(){
    int total_days, day_count;
    int total_patients=0;
    int overcrowed_days=0;
    scanf("%d",&total_days);
    for(int i=0;i<total_days;i++){
        scanf("%d",&day_count);
        if(day_count>100){
        overcrowed_days++;
        }
    total_patients+=day_count;
    }
    printf("Total Patients: %d\n",total_patients);
    printf("Overcrowded Days: %d\n",overcrowed_days);
    return 0;
}

#include<stdio.h>
int main(){
    int total_count;
    int voltage_reading;
    int minimum_voltage;
    int low_voltage=0;
    scanf("%d",&total_count);
    for(int i=0;i<total_count;i++){
        scanf("%d",&voltage_reading);
        if(voltage_reading<210){
            low_voltage++;
        }
        if(voltage_reading<minimum_voltage){
            minimum_voltage=voltage_reading;
        }
    }
    printf("Minimum Voltage: %d\n",minimum_voltage);
    printf("Low Voltage Events: %d\n",low_voltage);
    return 0;
}
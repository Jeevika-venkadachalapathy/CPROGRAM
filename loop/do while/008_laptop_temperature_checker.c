#include<stdio.h>
int main(){
int total_hours;
int per_hour, i=0;
int high_temperature=0;
scanf("%d",&total_hours);
do{
    scanf("%d",&per_hour);
    if(high_temperature<per_hour){
        high_temperature=per_hour;
    }
    i++;
}
while(i<total_hours);
printf("High Temperature: %d",high_temperature);
return 0;
}
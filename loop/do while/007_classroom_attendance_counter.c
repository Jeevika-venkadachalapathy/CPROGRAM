#include<stdio.h>
int main(){
    int total_days;
    int attendance, i=0;
    int present_count=0;
    scanf("%d",&total_days);
    do{
        scanf("%d",&attendance);
        if(attendance==1){
            present_count++;
        }
        i++;
    }
    while(i<total_days);
    printf("Present Count: %d",present_count);
    return 0;
}
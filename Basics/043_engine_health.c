#include<stdio.h>
int main(){
    int temp,oil,rpm;
    scanf("%d %d %d",&temp, &oil, &rpm);
    if(temp>75||oil<12||rpm>7000)
    printf("Engine Health: Poor");
    else if(temp>50||oil<12||rpm>4000)
    printf("Engine Health: Fair");
    else
    printf("Good");
}

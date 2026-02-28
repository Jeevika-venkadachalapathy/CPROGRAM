#include <stdio.h>

int main() {
    int month;

    if(scanf("%d",&month)!=1 || month<1 || month>12){
        printf("Invalid Input");
        return 0;
    }

    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("31 Days\n");
    else if(month==4||month==6||month==9||month==11)
        printf("30 Days\n");
    else
        printf("28 or 29 Days\n");

    if(month<=3)
        printf("Quadrant 1");
    else if(month<=6)
        printf("Quadrant 2");
    else if(month<=9)
        printf("Quadrant 3");
    else
        printf("Quadrant 4");

    return 0;
}

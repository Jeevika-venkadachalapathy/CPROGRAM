#include <stdio.h>

int main(){
    int day;

    if(scanf("%d",&day)!=1 || day<1 || day>7){
        printf("Invalid Input");
        return 0;
    }

    switch(day){
        case 1:
            printf("Sunday\nHoliday");
            break;
        case 2:
            printf("Monday\nWeekday");
            break;
        case 3:
            printf("Tuesday\nWeekday");
            break;
        case 4:
            printf("Wednesday\nWeekday");
            break;
        case 5:
            printf("Thursday\nWeekday");
            break;
        case 6:
            printf("Friday\nWeekday");
            break;
        case 7:
            printf("Saturday\nHoliday");
            break;
    }

    return 0;
}

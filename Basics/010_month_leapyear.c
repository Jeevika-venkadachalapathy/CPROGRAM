#include <stdio.h>

int main() {
    int month, year;

    if(scanf("%d",&month)!=1 || month<1 || month>12){
        printf("Invalid Input");
        return 0;
    }

    if(month==1) printf("January - 31 Days");
    else if(month==2){
        if(scanf("%d",&year)!=1){
            printf("Invalid Input");
            return 0;
        }

        if((year%400==0) || (year%4==0 && year%100!=0))
            printf("February - 29 Days");
        else
            printf("February - 28 Days");
    }
    else if(month==3) printf("March - 31 Days");
    else if(month==4) printf("April - 30 Days");
    else if(month==5) printf("May - 31 Days");
    else if(month==6) printf("June - 30 Days");
    else if(month==7) printf("July - 31 Days");
    else if(month==8) printf("August - 31 Days");
    else if(month==9) printf("September - 30 Days");
    else if(month==10) printf("October - 31 Days");
    else if(month==11) printf("November - 30 Days");
    else printf("December - 31 Days");

    return 0;
}

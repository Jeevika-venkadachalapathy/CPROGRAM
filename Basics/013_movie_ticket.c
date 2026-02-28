#include <stdio.h>
int main(){
    int age;
    if(scanf("%d",&age)!=1||age<0){
        printf("Invalid Input");
        return 0;
    }
    if(age<=12)
        printf("Ticket Price: 100");
    else if(age<=18)
        printf("Ticket Price: 150");
    else if(age<=60)
        printf("Ticket Price: 200");
    else
        printf("Ticket Price: 120");
    return 0;
}

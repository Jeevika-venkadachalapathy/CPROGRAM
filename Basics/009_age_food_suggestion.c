#include <stdio.h>

int main() {
    int age;

    if(scanf("%d",&age)!=1 || age<0){
        printf("Invalid Input");
        return 0;
    }

    if(age<=5)
        printf("Suggested Food: Mashed vegetables or soft fruits");
    else if(age<=12)
        printf("Suggested Food: Rice and vegetables");
    else if(age<=18)
        printf("Suggested Food: Burgers or pasta");
    else if(age<=50)
        printf("Suggested Food: Balanced diet meals");
    else
        printf("Suggested Food: Soup or grilled fish");

    return 0;
}

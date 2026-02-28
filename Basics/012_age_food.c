#include <stdio.h>
int main(){
    int age;
    if(scanf("%d",&age)!=1||age<0){
        printf("Invalid Input");
        return 0;
    }
    if(age<=5)
        printf("Mashed vegetables or soft fruits");
    else if(age<=12)
        printf("Healthy food");
    else if(age<=18)
        printf("Burgers or pasta");
    else if(age<=50)
        printf("Balanced diet meals");
    else
        printf("Soup or grilled fish");
    return 0;
}

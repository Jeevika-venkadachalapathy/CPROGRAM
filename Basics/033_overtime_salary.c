#include <stdio.h>
int main(){
    float hours,rate;
    if(scanf("%f%f",&hours,&rate)!=2||hours<0||rate<0){
        printf("Invalid Input");
        return 0;
    }
    float salary;
    if(hours<=40)
        salary=hours*rate;
    else
        salary=40*rate+(hours-40)*rate*1.5;
    printf("Total Salary: %.2f",salary);
    return 0;
}

#include <stdio.h>
int main(){
    float basic;
    if(scanf("%f",&basic)!=1||basic<0){
        printf("Invalid Input");
        return 0;
    }
    float hra=0,da=0;
    if(basic<=70000){
        hra=basic*0.30;
        da=basic*0.80;
    }
    printf("Gross Salary: %.2f",basic+hra+da);
    return 0;
}

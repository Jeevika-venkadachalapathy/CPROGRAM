#include<stdio.h>
int main(){
    int amount;
    scanf("%d",&amount);
    if(amount<1000){
        float dis=(amount*5)/100;
        printf("Discount: %.2f",dis);
    }
    else if(amount>=1000&&amount<=5000){
        float dis=(amount*10)/100;
        printf("Discount: %.2f",dis);
    }
    else{
        float dis=(amount*15)/100;
        printf("Discount: %.2f",dis);
    }
}

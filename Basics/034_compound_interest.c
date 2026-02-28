#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t;
    if(scanf("%f%f%f",&p,&r,&t)!=3||p<0||r<0||t<0){
        printf("Invalid Input");
        return 0;
    }
    float ci=p*pow((1+r/100),t)-p;
    printf("Compound Interest: %.2f",ci);
    return 0;
}

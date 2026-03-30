#include<stdio.h>
int main(){
    float weight, height, bmi;
    scanf("%f %f", &weight, &height);
    bmi = weight / (height * height);
    if(bmi < 0 || bmi > 100){
        printf("Invalid BMI");
    }
    else if(bmi < 18.5){
        printf("Underweight");
    }
    else if(bmi >= 18.5 && bmi <= 24.9){
        printf("Normal weight");
    }
    else if(bmi >= 25 && bmi <= 29.9){
        printf("Overweight");
    }
    else{
        printf("Obese");
    }
    return 0;
}
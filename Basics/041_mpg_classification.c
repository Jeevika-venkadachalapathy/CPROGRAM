#include<stdio.h>
int main(){
    float m,g;
    scanf("%f %f",&m,&g);
    float mpg=m/g;
    if(g==0){
        printf("Invaild Input");
        return 0;
    }
    if(mpg<15)
    printf("%.2f\nPoor",mpg);
    else if(mpg>=15&&mpg<26)
    printf("%.2f\nAverage",mpg);
    else if(mpg>=26&&mpg<36)
    printf("%.2f\nGood",mpg);
    else
    printf("%.2f\nExcellent",mpg);
}

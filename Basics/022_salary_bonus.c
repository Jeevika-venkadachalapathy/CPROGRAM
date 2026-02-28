#include <stdio.h>
int main(){
    float salary;
    char g;
    if(scanf("%f %c",&salary,&g)!=2||salary<0){
        printf("Invalid Input");
        return 0;
    }
    float bonus=0;
    if(g=='M'||g=='m') bonus=salary*0.10;
    else if(g=='F'||g=='f') bonus=salary*0.15;
    else{
        printf("Invalid Input");
        return 0;
    }
    printf("Final Salary: %.2f",salary+bonus);
    return 0;
}

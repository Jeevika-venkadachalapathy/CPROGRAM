#include <stdio.h>
int main(){
    int num,div;
    if(scanf("%d%d",&num,&div)!=2){
        printf("Invalid Input");
        return 0;
    }
    if(div==0){
        printf("Division by zero error");
        return 0;
    }
    if(num%div==0)
        printf("Divisible");
    else
        printf("Not Divisible");
    return 0;
}

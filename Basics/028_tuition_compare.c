#include <stdio.h>
int main(){
    int age;
    float tuition,expense;
    if(scanf("%d%f%f",&age,&tuition,&expense)!=3){
        printf("Invalid Input");
        return 0;
    }
    if(age>=18&&age<=25){
        if(tuition>expense) printf("Tuition Higher");
        else printf("Expenses Higher or Equal");
    }else printf("Age Not Eligible");
    return 0;
}

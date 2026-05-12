#include<stdio.h>
int main(){
    int salary;
    int absent_days;
    scanf("%d",&salary);
    scanf("%d",&absent_days);
    for(int i=0;i<absent_days;i++){
        salary-=100;
    }
    printf("%d",salary);
    return 0;
}

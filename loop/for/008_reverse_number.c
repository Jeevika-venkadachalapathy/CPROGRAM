#include<stdio.h>
int main(){
    int num,rev=0;
    int last_digit;
    scanf("%d",&num);
    for(;num>0;){
        last_digit=num%10;
        rev=rev*10+last_digit;
        num=num/10;
    }
    printf("%d",rev);
}
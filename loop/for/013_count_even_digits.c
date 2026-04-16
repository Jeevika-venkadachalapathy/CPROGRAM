#include<stdio.h>
int main(){
    int num,n;
    int count=0;
    scanf("%d",&num);
    for(;num>0;){
        n=num%10;
        num=num/10;
        if(n%2==0)
        count++;
    }
    printf("%d",count);
}
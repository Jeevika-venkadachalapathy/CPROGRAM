#include<stdio.h>
int main(){
    int num,i,count=1;
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        count=count*i;
    }
    printf("%d",count);
}
#include<stdio.h>
int main(){
    int a,b;
    int sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i=i+a){
        sum=sum+i;
    }
    printf("%d",sum);
}
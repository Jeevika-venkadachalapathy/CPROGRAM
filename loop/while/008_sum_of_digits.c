#include<stdio.h>
int main(){
    int n,dig,sum=0;
    scanf("%d",&n);
    while(n>0){
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    printf("%d",sum);
}
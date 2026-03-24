#include<stdio.h>
int main(){
    int n,digit=0,rev;
    scanf("%d",&n);
    while(n>0){
        rev=n%10;
        digit=digit*10+rev;
        n=n/10;
    }
    printf("%d",digit);
}
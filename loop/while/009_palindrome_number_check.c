#include<stdio.h>
int main(){
    int n,dig,org;
    int rev=0;
    scanf("%d",&n);
    org=n;
    while(n>0){
        dig=n%10;
        n=n/10;
        rev=rev*10+dig;
    }
    if(rev==org)
    printf("Palindrom");
    else
    printf("Not Palindrom");
}
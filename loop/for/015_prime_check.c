#include<stdio.h>
int main(){
    int n,prime=0;
    int i;
    scanf("%d",&n);
    if(n<=1)
    printf("Not Prime");
    return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        prime++;
    }
    if(prime==0)
    printf("Prime");
    else
    printf("Not Prime");
}
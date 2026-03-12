#include<stdio.h>
int main(){
    int n,i=1,m=10;
    scanf("%d",&n);
    while(i<=m){
            printf("%d * %d = %d\n",i,n,i*n);
            i++;
    }
}
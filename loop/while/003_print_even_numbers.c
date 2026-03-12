#include<stdio.h>
int main(){
    int n=1,i;
    scanf("%d",&i);
    while(i>=n){
        if(i%2==0){
            printf("%d ",i);
        }
        i--;
    }
}
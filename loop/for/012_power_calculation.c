#include<stdio.h>
int main(){
    int num,power;
    int p=1;
    scanf("%d",&num);
    scanf("%d",&power);
    for(int i=0;i<power;i++){
        p=p*num;
    }
    printf("%d",p);
}
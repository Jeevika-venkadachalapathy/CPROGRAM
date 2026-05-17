#include<stdio.h>
int main(){
    int password;
    int count=0;
    do{
        scanf("%d",&password);
        count++;
    }
    while(password!=1234);
    printf("Attempt Count: %d",count);
    return 0;
}
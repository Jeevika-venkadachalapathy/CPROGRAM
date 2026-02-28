#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1){
        printf("Invalid Input");
        return 0;
    }
    if(n%7==0||n%10==7)
        printf("Buzz Number");
    else
        printf("Not Buzz Number");
    return 0;
}

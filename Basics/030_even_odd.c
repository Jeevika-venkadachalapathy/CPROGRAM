#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1){
        printf("Invalid Input");
        return 0;
    }
    if(n%2==0) printf("Even");
    else printf("Odd");
    return 0;
}

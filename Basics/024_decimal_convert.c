#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1||n<0){
        printf("Invalid Input");
        return 0;
    }
    printf("Hex: %X\nOctal: %o",n,n);
    return 0;
}

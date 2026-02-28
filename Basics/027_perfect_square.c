#include <stdio.h>
#include <math.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1||n<0){
        printf("Invalid Input");
        return 0;
    }
    int r=sqrt(n);
    if(r*r==n) printf("Perfect Square");
    else printf("Not Perfect Square");
    return 0;
}

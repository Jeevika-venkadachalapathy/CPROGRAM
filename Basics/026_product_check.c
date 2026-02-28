#include <stdio.h>
int main(){
    int a,b;
    if(scanf("%d%d",&a,&b)!=2){
        printf("Invalid Input");
        return 0;
    }
    int p=a*b;
    if(p%2==0) printf("%d",p/2);
    else printf("%d",p/3);
    return 0;
}

#include <stdio.h>
int main(){
    int total,perDay,days;
    if(scanf("%d%d%d",&total,&perDay,&days)!=3||total<0||perDay<0||days<0){
        printf("Invalid Input");
        return 0;
    }
    if(total>=perDay*days)
        printf("1");
    else
        printf("0");
    return 0;
}

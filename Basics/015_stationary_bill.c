#include <stdio.h>
int main(){
    int pen,notebook,pencil;
    if(scanf("%d%d%d",&pen,&notebook,&pencil)!=3){
        printf("Invalid Input");
        return 0;
    }
    int total=pen*20+notebook*70+pencil*9;
    printf("Total Amount: %d",total);
    return 0;
}

#include <stdio.h>
int main(){
    int angle;
    if(scanf("%d",&angle)!=1){
        printf("Invalid Input");
        return 0;
    }
    angle=angle%360;
    if(angle==0) printf("East");
    else if(angle==90) printf("North");
    else if(angle==180) printf("West");
    else if(angle==270) printf("South");
    else printf("Other Direction");
    return 0;
}

#include <stdio.h>
int main(){
    int x,y;
    if(scanf("%d%d",&x,&y)!=2){
        printf("Invalid Input");
        return 0;
    }
    if(x==0&&y==0) printf("Origin");
    else if(x==0) printf("Y-Axis");
    else if(y==0) printf("X-Axis");
    else if(x>0&&y>0) printf("Quadrant I");
    else if(x<0&&y>0) printf("Quadrant II");
    else if(x<0&&y<0) printf("Quadrant III");
    else printf("Quadrant IV");
    return 0;
}

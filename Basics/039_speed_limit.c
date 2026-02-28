#include <stdio.h>
int main(){
    int limit,speed;
    if(scanf("%d%d",&limit,&speed)!=2||limit<0||speed<0){
        printf("Invalid Input");
        return 0;
    }
    if(speed>limit)
        printf("Over Speeding - Warning");
    else
        printf("Within Speed Limit");
    return 0;
}

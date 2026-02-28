#include <stdio.h>

int main(){
    int steps,minutes;

    if(scanf("%d%d",&steps,&minutes)!=2 || steps<0 || minutes<=0){
        printf("Invalid Input");
        return 0;
    }

    if(steps>=10000)
        printf("Excellent Fitness");
    else if(steps>=7000)
        printf("Good Fitness");
    else if(steps>=4000)
        printf("Average Fitness");
    else
        printf("Poor Fitness");

    return 0;
}

#include<stdio.h>
int main(){
    int run,over;
    scanf("%d %d",&run ,&over);
    if(over==0){
        printf("Invalid Input");
        return 0;
    }
    int run_rate=run/over;
    float percentage=run_rate*10;
    if(percentage<50){
        printf("Percentage = %.2f\n",percentage);     
        printf("Prediction: Opponent can win");
    }
    else if(percentage==50){
        printf("Percentage = %.2f\n",percentage);
        printf("Prediction: Equal Change");
    }
    else{
        printf("Percentage = %.2f\n",percentage);
        printf("Prediction: Batting team can win");
    }
}

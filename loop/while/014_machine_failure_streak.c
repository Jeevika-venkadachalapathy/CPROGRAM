#include<stdio.h>
int main(){
    int Total_Count, Streak;
    int count = 0, i = 0;
    int Longest_Streak = 0;
    scanf("%d",&Total_Count);
    while(Total_Count > i){
        scanf("%d",&Streak);
        if(Streak == 0){
            count++;
            if(count > Longest_Streak){
                Longest_Streak = count;
            }
        }
        else{
            count = 0;
        }

        i++;
    }
    printf("Longest Failure Streak: %d", Longest_Streak);
}
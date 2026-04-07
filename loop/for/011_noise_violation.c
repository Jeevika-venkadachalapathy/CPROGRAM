#include<stdio.h>
int main(){
    int n, noise, i = 0;
    int count = 0;
    int current_streak = 0;
    int max_streak = 0;
    scanf("%d", &n);
    while(i < n){
        scanf("%d", &noise);
        if(noise > 70){
            count++;
            current_streak++;

            if(current_streak > max_streak){
                max_streak = current_streak;
            }
        }
        else{
            current_streak = 0;
        }
        i++; 
    }
    printf("Noise Violations: %d\n", count);
    printf("Longest Violation Streak: %d\n", max_streak);
    return 0;
}

#include<stdio.h>
int main(){
    int total_numbers;
    int numbers, i=0;
    int odd_sum=0;
    scanf("%d",&total_numbers);
    do{
        scanf("%d",&numbers);
        if(numbers%2!=0){
            odd_sum+=numbers;
        }
        i++;
    }
    while(i<total_numbers);
    printf("Odd Sum: %d",odd_sum);
    return 0;
}
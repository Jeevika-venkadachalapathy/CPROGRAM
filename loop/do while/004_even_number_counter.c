#include<stdio.h>
int main(){
    int total_numbers, i=0;
    int number;
    int even_count=0;
    scanf("%d",&total_numbers);
    do{
        scanf("%d",&number);
        if(number%2==0){
            even_count++;
        }
        i++;
    }
    while(i<total_numbers);
    printf("Even Count: %d",even_count);
    return 0;
}
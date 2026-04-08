#include <stdio.h>
int main() {
    int Total_Data, Days, Data_Per_Day;
    int i = 0, count = 0;
    scanf("%d", &Total_Data);
    scanf("%d", &Days);
    while (i < Days) {
        scanf("%d", &Data_Per_Day);
        Total_Data = Total_Data - Data_Per_Day;
        if(Total_Data >= 0){
            count++;   
        } 
        else{
            Total_Data = 0; 
            break;
        }
        i++; 
    }
    printf("Days Used: %d\n", count);
    printf("Remaining Data: %dGB\n", Total_Data);
    return 0;
}
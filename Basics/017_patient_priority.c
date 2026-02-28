#include <stdio.h>
int main(){
    int s;
    if(scanf("%d",&s)!=1||s<0){
        printf("Invalid Input");
        return 0;
    }
    if(s>=5)
        printf("High Priority");
    else if(s>=3)
        printf("Medium Priority");
    else
        printf("Low Priority");
    return 0;
}

#include<stdio.h>
int main(){
    int total_classes, i=0;
    int per_class, total_hours=0;
    scanf("%d",&total_classes);
    do{
        scanf("%d",&per_class);
        total_hours+=per_class;
        i++;
    }
    while(i<total_classes);
    printf("Total Hours: %d",total_hours);
    return 0;
}
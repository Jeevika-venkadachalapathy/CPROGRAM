#include<stdio.h>
int main(){
    int total_subject, i=0;
    int mark, total_mark=0;
    scanf("%d",&total_subject);
    do{
        scanf("%d",&mark);
        total_mark+=mark;
        i++;
    }
    while(i<total_subject);
    printf("Total Marks: %d",total_mark);
    return 0;
}

#include<stdio.h>
int main(){
    int num,next;
    int first=0,second=1;
    scanf("%d",&num);
    if(num>=1)
    printf("%d ",first);
    if(num>=2)
    printf("%d ",second);
    for(int i=0;i<num-2;i++){
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;
        
    }
}
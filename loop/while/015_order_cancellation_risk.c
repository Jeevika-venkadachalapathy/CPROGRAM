#include<stdio.h>
int main(){
    int orders,count,i=0;
    int success=0,fail=0;
    scanf("%d",&orders);
    while(i<orders){
        scanf("%d",&count);
        if(count==1)
        success++;
        else
        fail++;
        i++;
    }
    printf("Successful: %d\n",success);
    printf("Cancelled: %d\n",fail);
    if(success>fail)
    printf("Status: Safe");
    else
    printf("Status: Risk");
}
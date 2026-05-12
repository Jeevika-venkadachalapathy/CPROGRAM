#include<stdio.h>
int main(){
    int num,n;
    int total=0,j=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&n);
        if(n>1000)
        j++;
        total=total+n;
    }
    printf("Total Expense: %d\n",total);
    printf("Overspend Days: %d",j);
}

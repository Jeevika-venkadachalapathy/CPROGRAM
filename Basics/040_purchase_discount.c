#include <stdio.h>
int main(){
    int qty;
    float price;
    if(scanf("%d%f",&qty,&price)!=2||qty<0||price<0){
        printf("Invalid Input");
        return 0;
    }
    float total=qty*price;
    float discount=0;
    if(total>5000) discount=total*0.20;
    else if(total>2000) discount=total*0.10;
    printf("Final Amount: %.2f",total-discount);
    return 0;
}

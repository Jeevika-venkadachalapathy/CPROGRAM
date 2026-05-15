#include<stdio.h>
int main(){
    int total_product;
    int product_price, i=0;
    int total_price=0;
    scanf("%d",&total_product);
    do{
        scanf("%d",&product_price);
        total_price+=product_price;
        i++;
    }
    while(i<total_product);
    printf("Total Bill: %d",total_price);
    return 0;
}
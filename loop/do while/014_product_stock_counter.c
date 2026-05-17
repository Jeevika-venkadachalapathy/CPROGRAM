#include<stdio.h>
int main(){
    int total_product, i=0;
    int product_quantities;
    int total_stock=0;
    scanf("%d",&total_product);
    do{
        scanf("%d",&product_quantities);
        total_stock+=product_quantities;
        i++;
    }
    while(i<total_product);
    printf("Total Stock: %d",total_stock);
    return 0;
}
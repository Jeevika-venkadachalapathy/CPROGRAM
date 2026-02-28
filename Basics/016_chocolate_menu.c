#include <stdio.h>
int main(){
    int choice;
    if(scanf("%d",&choice)!=1){
        printf("Invalid Input");
        return 0;
    }
    switch(choice){
        case 1: printf("Milk Chocolate - Creamy taste"); break;
        case 2: printf("Dark Chocolate - Rich flavour"); break;
        case 3: printf("White Chocolate - Sweet and smooth"); break;
        default: printf("Invalid Choice");
    }
    return 0;
}

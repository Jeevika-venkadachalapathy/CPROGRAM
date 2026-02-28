#include <stdio.h>

int main() {
    int a,b;

    if(scanf("%d%d",&a,&b)!=2){
        printf("Invalid Input");
        return 0;
    }

    if((a ^ b) == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}

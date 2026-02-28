#include <stdio.h>
int main(){
    float t;
    if(scanf("%f",&t)!=1){
        printf("Invalid Input");
        return 0;
    }
    if(t>=37) printf("Fever");
    else printf("No Fever");
    return 0;
}

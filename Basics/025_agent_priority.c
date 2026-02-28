#include <stdio.h>
int main(){
    float a,b;
    if(scanf("%f%f",&a,&b)!=2){
        printf("Invalid Input");
        return 0;
    }
    if(a>b) printf("Agent 1 High Priority");
    else if(b>a) printf("Agent 2 High Priority");
    else printf("Equal Priority");
    return 0;
}

#include <stdio.h>
int main(){
    float t;
    if(scanf("%f",&t)!=1){
        printf("Invalid Input");
        return 0;
    }
    if(t<=0) printf("Freezing weather");
    else if(t<=10) printf("Very Cold weather");
    else if(t<=20) printf("Cold weather");
    else if(t<=30) printf("Normal temperature");
    else if(t<=40) printf("Hot");
    else printf("Very hot");
    return 0;
}

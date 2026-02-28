#include <stdio.h>
int main(){
    float h;
    if(scanf("%f",&h)!=1||h<=0){
        printf("Invalid Input");
        return 0;
    }
    if(h<150) printf("Short");
    else if(h<170) printf("Average height");
    else if(h<190) printf("Tall");
    else printf("Very tall");
    return 0;
}

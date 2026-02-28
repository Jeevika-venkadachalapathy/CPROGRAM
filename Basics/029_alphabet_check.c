#include <stdio.h>
int main(){
    char c;
    if(scanf(" %c",&c)!=1){
        printf("Invalid Input");
        return 0;
    }
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        printf("Alphabet");
    else
        printf("Not Alphabet");
    return 0;
}

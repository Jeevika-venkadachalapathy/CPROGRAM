#include <stdio.h>
int main(){
    char c;
    if(scanf(" %c",&c)!=1){
        printf("Invalid Input");
        return 0;
    }
    if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            printf("Vowel");
        else
            printf("Consonant");
    }else
        printf("Not a Letter");
    return 0;
}

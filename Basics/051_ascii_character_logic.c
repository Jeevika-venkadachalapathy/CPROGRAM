#include<stdio.h>
int main(){
    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    int v1 = (ch1=='A'||ch1=='E'||ch1=='I'||ch1=='O'||ch1=='U'||ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u');
    int v2 = (ch2=='A'||ch2=='E'||ch2=='I'||ch2=='O'||ch2=='U'||ch2=='a'||ch2=='e'||ch2=='i'||ch2=='o'||ch2=='u');
    if(v1 && v2){
        printf("Sum = %d", ch1 + ch2);
    }
    else if(v1 || v2){
        printf("Difference = %d", ch1 - ch2);
    }
    else{
        printf("Product = %d", ch1 * ch2);
    }

    return 0;
}
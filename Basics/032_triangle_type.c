#include <stdio.h>
int main(){
    int a,b,c;
    if(scanf("%d%d%d",&a,&b,&c)!=3||a<=0||b<=0||c<=0){
        printf("Invalid Input");
        return 0;
    }
    if(a+b>c&&a+c>b&&b+c>a){
        if(a==b&&b==c) printf("Equilateral");
        else if(a==b||b==c||a==c) printf("Isosceles");
        else printf("Scalene");
    }else printf("Invalid Triangle");
    return 0;
}

#include<stdio.h>
int main() {
    int a = 5, b = 10;
    int *p, *q;
    p = &a;
    q = &b;
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("%d %d", a, b);
    return 0;
}
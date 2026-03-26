#include <stdio.h>
int main() {
    int a = 25;
    int *p;

    p = &a;

    printf("%p\n", p);
    printf("%p", &a);

    return 0;
}
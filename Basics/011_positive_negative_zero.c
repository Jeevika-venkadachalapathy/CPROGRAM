#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Invalid Input");
        return 0;
    }
    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}

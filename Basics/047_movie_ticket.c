#include<stdio.h>
int main() {
    int age, tickets;
    float price, total;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter number of tickets: ");
    scanf("%d", &tickets);
    if (age < 12)
        price = 100;
    else if (age <= 60)
        price = 200;
    else
        price = 150;
    total = price * tickets;
    if (tickets > 8)
        total = total - (total * 0.11);
    printf("Total Cost: %.2f", total);
    return 0;
}
#include<stdio.h>
int main() {
    int age;
    printf("Enter lion age: ");
    scanf("%d", &age);
    if (age >= 0 && age <= 2)
        printf("Cub");
    else if (age <= 6)
        printf("Juvenile");
    else if (age <= 10)
        printf("Subadult");
    else if (age <= 15)
        printf("Young Adult");
    else if (age <= 26)
        printf("Old Adult");
    else
        printf("Invalid Age");
    return 0;
}

#include<stdio.h>
int main() {
    float salary, newSalary;
    int rating;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter performance rating (1-5): ");
    scanf("%d", &rating);
    if (rating == 1)
        newSalary = salary;
    else if (rating == 2)
        newSalary = salary + (salary * 0.05);
    else if (rating == 3)
        newSalary = salary + (salary * 0.10);
    else if (rating == 4)
        newSalary = salary + (salary * 0.15);
    else if (rating == 5)
        newSalary = salary + (salary * 0.20);
    else {
        printf("Invalid rating\n");
        return 0;
    }

    printf("New Salary: %.2f", newSalary);

    return 0;
}
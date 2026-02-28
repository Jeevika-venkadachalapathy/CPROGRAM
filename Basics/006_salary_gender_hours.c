#include <stdio.h>

int main() {
    int hours;
    char gender;
    int salary = 0;

    if(scanf("%d %c", &hours, &gender)!=2 || hours<0){
        printf("Invalid Input");
        return 0;
    }

    int baseRate;

    if(gender=='M' || gender=='m')
        baseRate = 80;
    else if(gender=='F' || gender=='f')
        baseRate = 60;
    else{
        printf("Invalid Input");
        return 0;
    }

    if(hours <= 8)
        salary = hours * baseRate;
    else
        salary = (8 * baseRate) + ((hours - 8) * 100);

    printf("Total Salary: %d", salary);

    return 0;
}

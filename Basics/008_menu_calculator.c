#include <stdio.h>

int main() {
    int choice;
    float a,b;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");

    if(scanf("%d",&choice)!=1){
        printf("Invalid Input");
        return 0;
    }

    if(choice>=1 && choice<=4){
        if(scanf("%f%f",&a,&b)!=2){
            printf("Invalid Input");
            return 0;
        }
    }

    switch(choice){
        case 1:
            printf("Result: %.2f", a+b);
            break;
        case 2:
            printf("Result: %.2f", a-b);
            break;
        case 3:
            printf("Result: %.2f", a*b);
            break;
        case 4:
            if(b==0)
                printf("Cannot Divide by Zero");
            else
                printf("Result: %.2f", a/b);
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}

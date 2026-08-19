#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    choice:
    printf("What to do? (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
    scanf("%d", &choice);

    number:
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num1 <= 0 || num2 <= 0 && choice == 4) {
        printf("Error: Negative or zero numbers are not allowed for division.\n");
        goto number;
    }
    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            goto choice;
    }

    return 0;   
}
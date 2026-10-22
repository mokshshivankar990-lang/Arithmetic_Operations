#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    do {
        // Display the menu
        printf("\n=========================\n");
        printf("   BASIC CALCULATOR MENU \n");
        printf("=========================\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("-------------------------\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // If choice is an operation, read two numbers
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
        }

        // Perform operation based on user choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed!\n");
                }
                break;
                
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }

    } while (choice != 5); // Loop continues until user chooses to exit

    return 0;
}
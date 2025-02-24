/*
 * Ex8.c
 *
 *  Created on: Feb 12, 2025
 *      Author: Yahia Zidan
 *      Description:8-C Program Simple Calculator by using Switch
 */


#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    printf("Please enter your choice (+, -, *, /): ");
    fflush(stdout);
    scanf(" %c", &choice);

    printf("Please enter the first number: ");
    fflush(stdout);
    scanf("%f", &num1);

    printf("Please enter the second number: ");
    fflush(stdout);
    scanf("%f", &num2);

    switch(choice) {
        case '+':
            result = num1 + num2;
            printf("\nThe result of the calculation: %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nThe result of the calculation: %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nThe result of the calculation: %.2f", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\nThe result of the calculation: %.2f", result);
            } else {
                printf("\nError: Division by zero is not allowed.");
            }
            break;
        default:
            printf("\nInvalid operator entered.");
            break;
    }

    return 0;
}

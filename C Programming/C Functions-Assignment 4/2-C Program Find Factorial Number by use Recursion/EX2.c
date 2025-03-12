/*
 * EX2.c
 *
 *  Created on: Mar 8, 2025
 *      Author: Yahia Zakaria
 *      Description: C Program to Find Factorial Number Using Recursion
 */

#include <stdio.h>

// Recursive factorial function
int Factfun(int number) {
    if (number == 0 || number == 1) {  // Base case
        return 1;
    }
    else if (number > 1) {
        return number * Factfun(number - 1);  // Recursive call
    }
    return -1;  // Error code for invalid input
}

int main() {
    int num, result;

    printf("Please Enter a Non-negative Number: ");
    fflush(stdout);
    scanf("%d", &num);

    if (num >= 0) {
        result = Factfun(num);
        if (result == -1) {
            printf("Error! Factorial of negative numbers doesn't exist.\n");
        } else {
            printf("Factorial of %d = %d\n", num, result);
        }
    } else {
        printf("Invalid input! Negative numbers are not allowed.\n");
    }

    return 0;
}

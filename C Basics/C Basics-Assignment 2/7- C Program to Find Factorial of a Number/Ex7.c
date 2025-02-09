/*
 * Ex7.c
 *
 *  Created on: Feb 12, 2025
 *      Author: Yahia Zidan
 *      Description:C Program to Find Factorial of a Number
 */


#include <stdio.h>

int main() {
    int number, i;
    int factorial = 1;

    printf("Please enter a number: ");
    fflush(stdout);
    scanf("%d", &number);

    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else if (number == 0 || number == 1) {
        printf("Factorial of %d is  Error!\n", number);
    } else {
        for (i = 2; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", number, factorial);
    }

    return 0;
}


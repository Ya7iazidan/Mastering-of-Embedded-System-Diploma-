/*
 * EX4.c
 *
 *  Created on: Mar 12, 2025
 *      Author: Work Station
 *      Description: C Program to Find Power of Number Using Recursion
 */

#include <stdio.h>

int PowerFun(int base, int exp)
{
    if (exp != 0) {
        return (base * PowerFun(base, exp - 1)); // Fixed typo in function name
    }
    else {
        return 1;
    }
}

int main() {
    int base, exp, result;

    printf("Enter base number: ");
    fflush(stdout);
    scanf("%d", &base);

    printf("Enter exponent (positive integer): ");
    fflush(stdout);
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Error: This program doesn't support negative exponents.\n");
        return 1;
    }

    result = PowerFun(base, exp);
    printf("%d^%d = %d\n", base, exp, result);

    return 0;
}

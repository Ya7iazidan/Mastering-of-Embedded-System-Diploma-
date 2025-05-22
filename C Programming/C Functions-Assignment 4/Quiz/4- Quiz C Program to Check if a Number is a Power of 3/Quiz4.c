/*
 * Quiz4.c
 *
 *  Created on: Mar 16, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Check if a Number is a Power of 3
 */


#include <stdio.h>

int is_power_of_3(int num) {
    if (num < 1)
        return 1;
    if (num == 1)
        return 1;
    while (num % 3 == 0) {
        num /= 3;
    }
    return num == 1 ? 0 : 1;
}

int main() {
    int number;

    printf("Enter a number to check: ");
    fflush(stdout);
    scanf("%d", &number);

    int result = is_power_of_3(number);

    printf("Result: %d\n", result);
    printf("[0 means power of 3, 1 means not]\n");

    return 0;
}

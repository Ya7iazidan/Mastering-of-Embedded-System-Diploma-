/*
 * EX4.c
 *
 *  Created on: Feb 9, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Check The Positive or Negative Value
 */

#include <stdio.h>

int main()
{
    int number;

    printf("Please Enter the Number: ");
    fflush(stdout);
    scanf("%d", &number);

    if (number > 0) {
        printf("The number entered is Positive: %d\n", number);
    }
    else if (number < 0) {
        printf("The number entered is Negative: %d\n", number);
    }
    else {
        printf("The number entered is Zero: %d\n", number);
    }

    return 0;
}

/*
 * EX2.C
 *
 *  Created on: Feb 8, 2025
 *      Author: Yahia Zidan
 */

#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("Please enter num1: ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Please enter num2: ");
    fflush(stdout);
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Value of Sum: %d\n", sum);

    return 0;
}

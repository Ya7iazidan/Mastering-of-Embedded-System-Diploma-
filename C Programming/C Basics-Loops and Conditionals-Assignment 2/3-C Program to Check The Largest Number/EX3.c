/*
 * EX3.c
 *
 *      Author: Yahia Zakaria
 *      Description: C Program Check the Largest Number
 */

#include <stdio.h>

int main()
{
    float num1, num2, num3;

    printf("Enter the Value of Number1: ");
    fflush(stdout);
    scanf("%f", &num1);

    printf("Enter the Value of Number2: ");
    fflush(stdout);
    scanf("%f", &num2);

    printf("Enter the Value of Number3: ");
    fflush(stdout);
    scanf("%f", &num3);


    if (num1 >= num2 && num1 >= num3) {
        printf("\nThe largest number is: %.2f\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("\nThe largest number is: %.2f\n", num2);
    }
    else {
        printf("\nThe largest number is: %.2f\n", num3);
    }

    return 0;
}

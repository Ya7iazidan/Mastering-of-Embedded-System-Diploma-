/*
 * EX6.c
 *
 *  Created on: Feb 8, 2025
 *      Author: Yahia Zakaria
 */

#include <stdio.h>

int main()
{
    float A, B, temp;


    printf("Please Enter Value of A: ");
    fflush(stdout);
    scanf("%f", &A);


    printf("Please Enter Value of B: ");
    fflush(stdout);
    scanf("%f", &B);


    temp = A;
    A = B;
    B = temp;


    printf("\nAfter Swapping:\n");
    printf("A = %f\n", A);
    printf("B = %f\n", B);

    return 0;
}

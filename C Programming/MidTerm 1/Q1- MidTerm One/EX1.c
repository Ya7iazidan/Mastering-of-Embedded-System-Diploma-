/*
 * EX1.c
 *
 *  Created on: May 3, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description: C Function to Take a Number and Sum all Digits
 */

#include <stdio.h>

// Function to sum three integers
int sum(int a, int b, int c, int d) {
	return a + b + c + d;
}

int main() {
	int num1, num2, num3, num4;
	int Sum;

	printf("Enter the Value of Number 1: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Enter the Value of Number 2: ");
	fflush(stdout);
	scanf("%d", &num2);

	printf("Enter the Value of Number 3: ");
	fflush(stdout);
	scanf("%d", &num3);

	printf("Enter the Value of Number 4: ");
	fflush(stdout);
	scanf("%d", &num4);

	Sum = sum(num1, num2, num3, num4); // Calling the sum function

	printf("The Sum of Values is : %d", Sum);
	return 0;
}

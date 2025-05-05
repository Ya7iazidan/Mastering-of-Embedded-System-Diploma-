/*
 * Ex2.c
 *
 *  Created on: May 3, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description: C Function to Take an Integer Number and Calculate it's Square Root
 */
#include <stdio.h>
#include <math.h>

// Function to compute square root of an integer
double calculateSquareRoot(int number) {
	if (number < 0) {
		printf("Error: Cannot calculate square root of a negative number.\n");
		return -1.0;  // Indicate error
	}
	return sqrt((double)number);
}

int main() {
	int num;
	double result;

	// Get input from the user
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	// Calculate square root
	result = calculateSquareRoot(num);

	// Display result if valid
	if (result >= 0) {
		printf("Square root of %d is: %.2f\n", num, result);
	}

	return 0;
}


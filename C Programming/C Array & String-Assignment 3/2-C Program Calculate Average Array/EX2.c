/*
 * EX2.c
 *
 *  Created on: Feb 21, 2025
 *  Author: Yahia Zidan
 *  Description: C Program to Calculate Average of an Array
 */

#include <stdio.h>

int main() {
    float Matrix[20];
    int n, i;
    float sum = 0;

    // Get number of elements from user
    printf("Enter number of elements (between 1 to 20): ");
    fflush(stdout);
    scanf("%d", &n);

    // Validate input range
    if (n <= 0 || n > 20) {
        printf("Invalid input! Number must be between 1 and 20.");
        return 1;
    }

    // Get array elements and calculate sum
    for (i = 0; i < n; i++) {
        printf("%d. Enter value: ", i + 1);
        fflush(stdout);
        scanf("%f", &Matrix[i]);  // Store input in array
        sum += Matrix[i];
    }

    // Calculate and display average
    float average = sum / n;
    printf("Average = %.2f", average);

    return 0;
}

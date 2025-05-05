/*
 * Ex4.c
 *
 *  Created on: May 3, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description:C Function to Reverse Digits in Number
 */

#include <stdio.h>

// Function to reverse the digits of a number
int reverseDigits(int num) {
    int reversed = 0;




    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return reversed;
}

int main() {
    int arr[20];
    int n, i, temp;

    // Get number of elements from user
    printf("Enter number of elements (between 1 to 20): ");
    fflush(stdout);
    scanf("%d", &n);

    // Validate input range
    if (n <= 0 || n > 20) {
        printf("Invalid input! Number must be between 1 and 20.");
        return 1;
    }

    // Get array elements
    for (i = 0; i < n; i++) {
        printf("%d. Enter value %d: ", i + 1, i + 1);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }

    // Reverse the ORDER of the array using swapping
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Reverse the DIGITS of each element
    printf("\nReversed numbers (array order and digits):\n");
    for (i = 0; i < n; i++) {
        arr[i] = reverseDigits(arr[i]); // Reverse digits of each element
        printf("%d ", arr[i]);
    }

    return 0;
}

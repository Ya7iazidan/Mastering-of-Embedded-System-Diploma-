/*
 * EX4.c
 *
 *  Created on: Feb 21, 2025
 *  Author: Yahia Zidan
 *  Description: C Program to Insert an Element in an Array
 */

#include <stdio.h>

int main() {
    int array[50];
    int element_insert, location;
    int n, i;

    // Get number of elements from user
    printf("Enter number of elements (0-49): ");
    fflush(stdout);
    scanf("%d", &n);

    // Validate input range (0-49 to allow insertion)
    if (n < 0 || n >= 50) {
        printf("Invalid input! Number must be between 0 and 49.");
        return 1;
    }

    // Input array elements
    for (i = 0; i < n; i++) {
        printf("%d. Enter value: ", i + 1);
        fflush(stdout);
        scanf("%d", &array[i]);
    }

    // Get element and position to insert
    printf("Enter the element to insert: ");
    fflush(stdout);
    scanf("%d", &element_insert);

    printf("Enter the location (0-%d): ", n);
    fflush(stdout);
    scanf("%d", &location);

    // Validate position
    if (location < 0 || location > n) {
        printf("Invalid location! Must be between 0 and %d", n);
        return 1;
    }

    // Shift elements to the right starting from the end
    for (i = n - 1; i >= location; i--) {
        array[i + 1] = array[i];
    }

    // Insert the new element
    array[location] = element_insert;
    n++; // Update array size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

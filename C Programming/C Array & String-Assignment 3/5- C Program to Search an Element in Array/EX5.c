/*
 * EX5.c
 *
 *  Created on: Feb 24, 2025
 *      Author: Yahia Zakaria
 *      Description:C Program to Search an Element in Array
 */
#include <stdio.h>

int main() {
    int Array[20];
    int Element_Searched;
    int n, i;
    int found = 0;
    int location;

    // Get number of elements from user
    printf("Enter number of elements (1 to 20): ");
    fflush(stdout);
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Invalid input! Number must be between 1 and 20.");
        return 0;
    }

    // Input array elements
    for (i = 0; i < n; i++) {
        printf("%d. Enter value: ", i + 1);
        fflush(stdout);
        scanf("%d", &Array[i]);
    }

    // Get element to Search
    printf("Enter the Element to Search: ");
    fflush(stdout);
    scanf("%d", &Element_Searched);

    // Search for the element
    for (i = 0; i < n; i++) {
        if (Array[i] == Element_Searched) {
            found = 1;
            location = i + 1;
            break;
        }
    }

    // Output the result
    if (found) {
        printf("The Location of Element is: %d", location);
    } else {
        printf("Element not found");
    }

    return 0;
}

/*
 * EX3.c
 *
 *  Created on: Feb 21, 2025
 *  Author: Yahia Zidan
 *  Description: C Program to Find The Transpose of a Matrix
 */

#include <stdio.h>

int main() {
    int Matrix[10][10], Transpose[10][10];
    int rows, cols, i, j;

    // Get matrix dimensions
    printf("Enter number of rows between (1 to 10): ");
    fflush(stdout);
    scanf("%d", &rows);

    printf("Enter number of columns between (1 to 10): ");
    fflush(stdout);
    scanf("%d", &cols);

    // Validate dimensions
    if (rows <= 0 || rows > 10 || cols <= 0 || cols > 10) {
        printf("Invalid dimensions! Values must be between 1 to 10.");
        return 1;
    }

    // Input matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            fflush(stdout);
            scanf("%d", &Matrix[i][j]);
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Transpose[j][i] = Matrix[i][j];
        }
    }

    // Print transposed matrix
    printf("\nTransposed Matrix (%dx%d):\n", cols, rows);
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
 * EX1.c
 *
 *  Created on: Feb 21, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Add Two Matrices Using Multi-dimensional Arrays
 */

#include <stdio.h>

int main() {
    // Declare three 2x2 matrices: two for input, one for the result
    float Matrix_1[2][2];
    float Matrix_2[2][2];
    float Matrix_Sum[2][2];
    int r, c; // Row and column indices

    // Read elements of the first matrix from the user
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            printf("Please Enter Value of Matrix 1 (%d, %d): ", r, c);
            fflush(stdout);
            scanf("%f", &Matrix_1[r][c]); // Store input in Matrix_1
        }
    }

    // Read elements of the second matrix from the user
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            printf("Please Enter Value of Matrix 2 (%d, %d): ", r, c);
            fflush(stdout);
            scanf("%f", &Matrix_2[r][c]); // Store input in Matrix_2
        }
    }

    // Calculate the sum of the two matrices
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            Matrix_Sum[r][c] = Matrix_1[r][c] + Matrix_2[r][c];
        }
    }

    // Display the resulting sum matrix
    printf("\nThe Sum of the Matrices is:\n");
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            printf("%2.2f\t", Matrix_Sum[r][c]);
        }
        printf("\n");
    }

    return 0;
}

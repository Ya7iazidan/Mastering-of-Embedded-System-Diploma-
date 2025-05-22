/*
 * EX2.c
 *
 * Created on: May 22, 2025
 * Author: ENG. Yahia Zakaria
 * Description: C Program to Add Distances in Feet-Inch System Using Structures
 */

#include <stdio.h>

struct SData_distance {
    int feet;
    float inch;
};

int main() {
    struct SData_distance d1, d2, sum;

    // Input first distance
    printf("\nEnter information for 1st Distance\n");

    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &d1.inch);

    // Input second distance
    printf("\nEnter information for 2nd Distance\n");
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &d2.inch);

    // Calculate raw sum
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Convert excess inches to feet
    while(sum.inch >= 12.0f) {
        sum.inch -= 12.0f;
        sum.feet++;
    }

    // Display result
    printf("\nSum of distances = %d'-%.1f'\n", sum.feet, sum.inch);

    return 0;
}

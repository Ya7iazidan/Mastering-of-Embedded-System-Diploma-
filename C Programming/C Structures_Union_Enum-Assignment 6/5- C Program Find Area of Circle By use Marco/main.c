/*
 * main.c
 *
 *  Created on: May 25, 2025
 *      Author: ENG. Yahia Zakaria
 *      Description: Find Area of Circle By use Marco.
 */

#include <stdio.h>
#define PI 3.14159265358979323846
#define AreaCir(radius) (PI * (radius) * (radius))

int main()
{
	float radius;
	printf("Enter The radius:\n");
	fflush(stdout);
	scanf("%f", &radius);

	if (radius <= 0) { // Check of Radius + or -
		printf("Error! The Radius Must be (+)\n");
		return 1;
	}

	printf("Area of  is %2f\n", AreaCir(radius));
	return 0;
}

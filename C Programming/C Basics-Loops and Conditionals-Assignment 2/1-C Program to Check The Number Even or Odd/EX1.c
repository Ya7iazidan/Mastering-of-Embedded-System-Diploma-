/*
 * EX1.c
 *
 *  Created on: Feb 9, 2025
 *      Author: Yahia Zidan
 *      Description: C Program Check the number is even or odd
 */

#include "stdio.h"

int main()
{
	int number;

	printf("Pleas Enter The Number To Check : "); // user enter the int
    fflush(stdin); fflush(stdout);
    scanf("%d", &number);

    if(number%2==0)                             // condition to check the number is even or odd
    {
    	printf("%d: This Number After Check is Even", number);
    }
    else
    {
    	printf("%d: This Number After Check is Odd", number);
    }
}

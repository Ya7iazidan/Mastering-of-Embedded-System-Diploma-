/*
 * EX.c
 *
 *  Created on: Feb 25, 2025
 *      Author: Yahia Zakaria
 *      Description:C Program Find Length of String Without Using Library String.h
 */
#include <stdio.h>

int main()
{
	char string[100];
	int i, sum=0;
    // Get input string safely
	printf("Please Enter The String: ");
	fflush(stdout);
	gets(string);
    // Calculate length until null terminator
	for(i = 0; string[i] != '\0'; i++)
	{
		++sum;
	}
	printf("The Length of String is: %d",sum);

	return 0;
}


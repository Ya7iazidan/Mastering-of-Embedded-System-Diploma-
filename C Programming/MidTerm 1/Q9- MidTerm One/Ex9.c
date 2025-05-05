/*
 * Ex9.c
 *
 *  Created on: May 3, 2025
 *      Author: Eng.Yahia Zakaria
 *      Description:C Program Reveres String
 */

#include <stdio.h>
#include <string.h>

int main()
{

	char Frist_Name[100], Socend_Name[100];

	// Get input string safely
	printf("Please Enter The String: ");
	fflush(stdout);
	gets(Frist_Name);

	printf("Please Enter The String: ");
	fflush(stdout);
	gets(Socend_Name);
	// Reverse the string
	strcat(Socend_Name, " ");
	strcat(Socend_Name, Frist_Name);


	printf("The String after reverse word: %s", Socend_Name);
	return 0;
}

/*
 * main.c
 *
 *  Created on: Feb 11, 2025
 *Author: Yahia Zakaria
 *      Description: C Program Calculate Sum
 */

#include "stdio.h"

int main()
{
	int i;
	int sum=0 ;

	for(i=1; i<=100; i++)
	{
		sum  = sum + i ;
		printf("\n%d: the sum of program: %d", i, sum);
	}

	return 0;
}

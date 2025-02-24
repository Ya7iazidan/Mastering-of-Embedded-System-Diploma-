/*
 * LAB.c
 *
 *  Created on: Feb 12, 2025
 *      Author: Yahia Zidan
 *      Description: Lab at Lec C Basics
 */
#include "stdio.h"

int main()
{
	int i ,j ;

	for(i = 0; i <= 9 ; i++)
	{
		for(j = i ; j <= 9 ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;

}


/*
 * QUIZ2.c
 *
 *  Created on: Mar 15, 2025
 *      Author: Yahia Zidan
 *      Description: C Program to Swapping two Arrays A&B.
 */

#include<stdio.h>
#include <string.h>
int main(){
	int Array_1 [50], Array_2 [50];
	int Array_temp [50];
	int i;
	printf("Please Enter The First Elements: ");
	fflush(stdout);
	for(i=0 ; i<2 ; i++)
	{
		scanf("%d ", &Array_1[i]);
	}
	printf("Please Enter The Second Elements: ");
	fflush(stdout);
	for(i=0 ; i<5 ; i++)
	{
		scanf("%d ", &Array_2[i]);
	}

	printf("Before Swapping\nFirst Array==>\t");
	fflush(stdout);
	for(i=0 ; i<2 ; i++)
	{
		printf("\t%d ", Array_1[i]);
	}
	printf("\nSecond Array==>\t");
	fflush(stdout);
	for(i=0 ; i<5 ; i++)
	{
		printf("\t%d ", Array_2[i]);
	}
	for(i=0 ; i<5 ; i++)
	{
		Array_temp [i] = Array_1 [i];
		Array_1 [i] = Array_2 [i];
		Array_2 [i] = Array_temp [i];
	}
	printf("\nafter Swapping\nFirst Array==>\t");
		fflush(stdout);
		for(i=0 ; i<5 ; i++)
		{
			printf("\t%d ", Array_1[i]);
		}
		printf("\nSecond Array==>\t");
		fflush(stdout);
		for(i=0 ; i<2 ; i++)
		{
			printf("\t%d ", Array_2[i]);
		}


	return 0;


}

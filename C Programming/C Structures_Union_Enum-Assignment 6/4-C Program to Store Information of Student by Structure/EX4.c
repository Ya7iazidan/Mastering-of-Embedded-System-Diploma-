/*
 * EX1.c
 *
 * Created on: May 21, 2025
 * Author: ENG. Yahia Zakaria
 * Description: C Program to Store and Display Student Information Using Structures
 */

#include <stdio.h>
#include <string.h>

// Define student information structure
struct SInforStudent {
	char m_name[50];
	int m_roll_number;
	float m_mark;
};

int main() {
	// Program variables
	struct SInforStudent students[50];
	int n;
	int i;

	// Get number of students from user
	printf("Enter Number of Students (between 1 to 50): ");
	fflush(stdout);  // Ensure prompt displays before input
	scanf("%d", &n);

	// Validate input range
	if (n < 1 || n > 50) {
		printf("Invalid Input. Number of Students must be between 1 and 50.");
		return 1;
	}

	// Collect student data
	for (i = 0; i < n; i++) {
		printf("\nEnter information for Student %d:\n", i + 1);

		// Get roll number
		printf("Roll Number: ");
		fflush(stdout);
		scanf("%d", &students[i].m_roll_number);
		// Get student name
		printf("Name: ");
		fflush(stdout);
		scanf("%s", students[i].m_name);
		// Get marks
		printf("Marks: ");
		fflush(stdout);
		scanf("%f", &students[i].m_mark);
	}

	// Display all student records
	printf("\n\nDisplaying Student Information:\n");
	for (i = 0; i < n; i++) {
		printf("\nStudent %d:\n", i + 1);
		printf("Name: %s\n", students[i].m_name);
		printf("Information Roll Number: %d\n", students[i].m_roll_number);
		printf("Marks: %.2f\n", students[i].m_mark);
	}

	return 0;
}

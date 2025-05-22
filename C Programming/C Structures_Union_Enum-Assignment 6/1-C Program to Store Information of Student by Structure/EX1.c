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
    char m_name[10];
    int m_roll_number;
    float m_mark;
};

int main() {
    // Program variables
    struct SInforStudent students;

        printf("\nEnter information for Student :\n");

        // Get student name
        printf("Name: ");
        fflush(stdout);
        scanf("%s", students.m_name);

        // Get roll number
        printf("Roll Number: ");
        fflush(stdout);
        scanf("%d", &students.m_roll_number);

        // Get marks
        printf("Marks: ");
        fflush(stdout);
        scanf("%f", &students.m_mark);


    // Display student records
    printf("\n\nDisplaying Student Information:\n");

        printf("\nStudent :\n");
        printf("Name: %s\n", students.m_name);
        printf("Roll Number: %d\n", students.m_roll_number);
        printf("Marks: %.2f\n", students.m_mark);


    return 0;
}

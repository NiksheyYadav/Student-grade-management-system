#include <stdio.h>
#include <string.h>  
#include <stdlib.h> 

struct studentGrade {
    int no_subj;
    char subject[100];
    char studentName[100];
    int marks[100];
    float avg;
    int year; 
    char inst[100];
};

int main(struct studentGrade student) {
    int totalMarks = 0;
    
    printf("Enter the name of the student: \n");
    scanf("%s", student.studentName);

    printf("Enter the institution type (college/school) of the student: \n");
    // Institution input
    if (scanf("%s", student.inst) != 1)
    {
        fprintf(stderr, "Error: Failed to read institution type\n");
        return 1; 
    }

    if (strcmp(student.inst, "school") == 0) 
    {
        printf("You are a school student.\n");
        printf("Enter the school year (integer value only): \n");
        
        if (scanf("%d", &student.year) != 1) 
        {
            fprintf(stderr, "Value must be an integer\n");
            return 1; 
        }
    } 
    
    else if (strcmp(student.inst, "college") == 0)
    {
        printf("You are a college student.\n");
        printf("Enter the college year (integer value only): \n");
        
        if (scanf("%d", &student.year) != 1) 
        {
            fprintf(stderr, "Value must be an integer\n");
            return 1; 
        }
    }
    
    else
    {
        fprintf(stderr, "Error: Invalid institution type (must be 'school' or 'college')\n");
        return 1;
    }

    printf("Enter the no. of subjects: \n");
    if (scanf("%d", &student.no_subj) != 1)
    {
        fprintf(stderr, "Value must be an integer\n");
    }
    
    // Input and calculate average
    printf("Enter the marks for each subject (out of 100):\n");

    for (int i = 0; i < student.no_subj; i++) {
        printf("Subject %d: ", i + 1);
        if (scanf("%d", &student.marks[i]) != 1 || student.marks[i] < 0 || student.marks[i] > 100) {
            fprintf(stderr, "Error: Invalid mark for subject %d. Please enter an integer between 0 and 100.\n", i + 1);
            return 1;
        }
        totalMarks += student.marks[i];
    }

    student.avg = (float)totalMarks / student.no_subj;

    // Assign grades based on average
    printf("\nStudent Name: %s\n", student.studentName);
    printf("Institution: %s\n", student.inst);
    if (student.inst[0] == 's' || student.inst[0] == 'S') // Check if it is school
    {
        printf("Year: %d\n", student.year);
    }
    printf("Average Marks: %.2f\n", student.avg);

    if (student.avg >= 95) {
        printf("Grade: A1\n");
    } else if (student.avg >= 90) {
        printf("Grade: A2\n");
    } else if (student.avg >= 85) {
        printf("Grade: B1\n");
    } else if (student.avg >= 80) {
        printf("Grade: B2\n");
    } else if (student.avg >= 75) {
        printf("Grade: C1\n");
    } else if (student.avg >= 70) {
        printf("Grade: C2\n");
    } else if (student.avg >= 65) {
        printf("Grade: D1\n");
    } else if (student.avg >= 50) {
        printf("Grade: D2\n");
    } else{
        printf("Grade: F\n");
    }


    return 0;
}

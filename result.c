#include <stdio.h>

int main() {
    char name[50];
    long long int roll;
    int total_subjects;
    int marks[total_subjects];
    int total = 0;
    float percentage;
    int i;

    // Student Details
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf(" %lld", &roll);

    printf("no of subjects:");
    scanf("%d",&total_subjects);

    // Marks Input
    for(i = 0; i < total_subjects; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / total_subjects;

    // Output
    printf("\n----- STUDENT RESULT -----\n");
    printf("Name       : %s\n", name);
    printf("Roll No    : %lld\n", roll);
    printf("Total Marks: %d\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    // Grade Logic
    if (percentage >= 90)
        printf("Grade      : A+\n");
    else if (percentage >= 80)
        printf("Grade      : A\n");
    else if (percentage >= 70)
        printf("Grade      : B\n");
    else if (percentage >= 60)
        printf("Grade      : C\n");
    else if (percentage >= 40)
        printf("Grade      : D\n");
    else
        printf("Grade      : F (Fail)\n");

    // Pass/Fail
    if (percentage >= 40)
        printf("Result     : PASS\n");
    else
        printf("Result     : FAIL\n");

    return 0;
}
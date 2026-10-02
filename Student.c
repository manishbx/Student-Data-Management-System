#include <stdio.h>

int main()
{
    int roll[10];
    char name[10][20];
    float marks[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Enter student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display student details
    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %.2f\n", marks[i]);
    }

    return 0;
}
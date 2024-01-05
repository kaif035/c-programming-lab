#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
    int totalMarks;
};

void calculateTotalMarks(struct Student *student) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += student->marks[i];
    }
    student->totalMarks = total;
}

void displayStudentDetails(struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("Total Marks: %d\n", student->totalMarks);
    printf("\n");
}

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        calculateTotalMarks(&students[i]);
    }

    printf("\nStudent details and total marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        displayStudentDetails(&students[i]);
    }

    return 0;
}
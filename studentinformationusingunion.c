#include <stdio.h>

union StudentInfo {
    char name[50];
    int age;
    float gpa;
};

int main() {
    union StudentInfo student;

    printf("Enter student name: ");
    scanf("%s", &student.name);

    printf("Enter student age: ");
    scanf("%d", &student.age);

    printf("Enter student GPA: ");
    scanf("%f", &student.gpa);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);

    return 0;
}
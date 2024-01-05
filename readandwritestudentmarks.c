#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
};

void writeToFile(struct Student students[], int numStudents) {
    FILE *file;
    file = fopen("student_data.txt", "w");

    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return;
    }

    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s ", students[i].name);
        for (int j = 0; j < 5; j++) {
            fprintf(file, "%d ", students[i].marks[j]);
        }
        fprintf(file, "\n");
    }

    fclose(file);
}

void readFromFile() {
    FILE *file;
    file = fopen("student_data.txt", "r");

    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return;
    }

    struct Student student;
    printf("\nStudent details from file:\n");
    while (fscanf(file, "%s %d %d %d %d %d",
                  student.name,
                  &student.marks[0], &student.marks[1], &student.marks[2], &student.marks[3], &student.marks[4]) != EOF) {
        printf("Name: %s\n", student.name);
        printf("Marks: %d %d %d %d %d\n", student.marks[0], student.marks[1], student.marks[2], student.marks[3], student.marks[4]);
        printf("\n");
    }

    fclose(file);
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
    }

    writeToFile(students, 3);
    readFromFile();

    return 0;
}
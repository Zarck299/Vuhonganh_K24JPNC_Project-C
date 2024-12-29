#include <stdio.h>
#include "functions.h"
//logic ham functions.h
void roleMenu() {
    printf("\t------Role Menu------\n");
    printf("[1]. Admin.\n");
    printf("[2]. Student.\n");
    printf("[3]. Teacher.\n");
    printf("[4]. Exit.\n");
    printf("\nCHOOSE YOUR ROLE: ");
}
void displayStudents(Student students[], int count) {// Ham in ra danh sach sinh vien
    if (count == 0) {
        printf("\nNo students in the list.\n");
        return;
    }
    else{
    	printf("\n--- Student List ---\n");
    	for (int i = 0; i < count; i++) {
//        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
		printf("\t----------***All Student***----------\n");
		printf("|==========|====================|========================|====================|============|");
		printf("|    ID    |        Name        |          Email         |        Phone       |  NO.Course |");
		printf("|==========|====================|========================|====================|============|");
		printf("|1	   |Vu Hong Anh         |honganhzarck@gmail.com  |0976460744          |1           |");
		printf("|==========|====================|========================|====================|============|");
		printf("|2         |Bui Van Anh         |anhvanbui1105@gmail.com |0123456789          |2           |");
		printf("|==========|====================|========================|====================|============|");
		printf("|3         |Nguyen Thanh Cong   |congbe2304@gmail.com    |0344352352          |3           |");
		printf("|==========|====================|========================|====================|============|");
    	}
    printf("---------------------\n");
	}
}
void addStudent(Student students[], int *count) {// Ham them sinh vien vao danh sach co san
    if (*count >= 100) {
        printf("\nStudent list is full. Cannot add more students.\n");
        return;
    }
    printf("\nEnter Student ID: ");
    scanf("%d", &students[*count].id);
    getchar();
    printf("Enter Student Name: ");
    fgets(students[*count].name, sizeof(students[*count].name), stdin);
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';
    printf("Enter Student Age: ");
    scanf("%d", &students[*count].age);
    (*count)++;
    printf("\nStudent added successfully!\n");
}
int main() {
    Student students[100];
    int studentCount = 0;
    int choice;
    do {
        printf("\n--- Student Management Menu ---\n");
        printf("1. Display Student List\n");
        printf("2. Add Student\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayStudents(students, studentCount);
                break;
            case 2:
                addStudent(students, &studentCount);
                break;
            case 0:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

#include <stdbool.h>	// Khai bao nguyen mau ham
struct Date{
	int day,month,year;
};
struct Student{
	char studentId[10];
	char classroomId[10];
	char name[20];
	struct Date dateOfBirth;
		char email[30];
		char phoneNumber[20];
		char password[20];
};
struct Classroom{
	char classroomId[10];
	char teacherId[10];
	char classroomName[10];
	struct Student student[10];
};
struct Teacher{
	char teacherId[10];
	char classroomId[10];
	char Name[20];
	struct Date dateOfBirth;
	bool gender;
	char Email[30];
	char phoneNumber[20];
	struct Classroom classroom[];
};
void roleMenu() {
    printf("1. Add Student\n");
    printf("2. View Students\n");
    printf("3. Delete Student\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}

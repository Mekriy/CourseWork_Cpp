#include "Student.h"
#include <string>

Student::Student() {
	strcpy(Group, "Unknown");
	strcpy(Surname, "Unknown");
	strcpy(Mark, "Unknown");
}
Student::~Student() {
	delete[]Group, Surname, Mark;
}

void Student::SetGroup(const char* value) {
	strcpy(Group, value);
}
void Student::SetSurname(const char* value) {
	strcpy(Surname, value);
}
void Student::SetMark(const char* value) {
	strcpy(Mark, value);
}

char* Student::GetGroup() {
	return Group;
}
char* Student::GetSurname() {
	return Surname;
}
char* Student::GetMark() {
	return Mark;
}
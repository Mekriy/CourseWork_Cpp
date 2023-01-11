#include "Student.h"
#include <string>
#include <iostream>
#pragma warning (disable : 4996)


Student::Student() {
	SetGroup("Unknown");
	SetSurname("Unknown");
	SetMark("Unknown");
}
Student::~Student() {
}

void Student::SetGroup(const char* value) {
	Group = new char[strlen(value)];
	strcpy(Group, value);
}
void Student::SetSurname(const char* value) {
	Surname = new char[strlen(value)];
	strcpy(Surname, value);
}
void Student::SetMark(const char* value) {
	Mark = new char[strlen(value)];
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

Student Student::operator()(const char* NewGroup, const char* NewSurname, const char* NewMark) {
	
	SetSurname(NewSurname);
	SetGroup(NewGroup);
	SetMark(NewMark);

	return *this;
}
Student Student::operator=(const Student& st) {
	if (this == &st)
		return *this;
	SetGroup(st.Group);
	SetSurname(st.Surname);
	SetMark(st.Mark);
	return *this;
}

std::istream& operator>>(std::istream& is, Student& st)
{
	std::cout << "Enter name of the group:\n";
	is.getline(st.Group, 256);
	std::cout << "Enter Surname of the student:\n";
	is.getline(st.Surname, 256);
	std::cout << "Enter Mark of the student:\n";
	is.getline(st.Mark, 256);
	return is;
}

std::ostream& operator<<(std::ostream& os, const Student& st)
{
	os << "Name of the group: " << st.Group << "\nSurname of the student: " << st.Surname << "\nMark of the student: " << st.Mark << std::endl;
	return os;
}

char* Student::ShowCurrentName() {
	std::cout << "Current name of the Student:\n";
	return Surname;
}
#include "Lesson.h"
#include <string>
#pragma warning (disable : 4996)

Lesson::Lesson() {
	SetDiscipline("Unknown");
	SetTypeOfLesson("Unknown");
	SetDate("Unknown");
	SetTime("Unknown");
	SetPlace("Unknown");
}
Lesson::~Lesson() {
}

void Lesson::SetDiscipline(const char* value) {
	Discipline = new char[strlen(value)];
	strcpy(Discipline, value);
}
void Lesson::SetTypeOfLesson(const char* value) {
	TypeOfLesson = new char[strlen(value)];
	strcpy(TypeOfLesson, value);
}
void Lesson::SetDate(const char* value) {
	Date = new char[strlen(value)];
	strcpy(Date, value);
}
void Lesson::SetTime(const char* value) {
	Time = new char[strlen(value)];
	strcpy(Time, value);
}
void Lesson::SetPlace(const char* value) {
	Place = new char[strlen(value)];
	strcpy(Place, value);
}

char* Lesson::GetDiscipline() {
	return Discipline;
}
char* Lesson::GetTypeOfLesson() {
	return TypeOfLesson;
}
char* Lesson::GetDate() {
	return Date;
}
char* Lesson::GetTime() {
	return Time;
}
char* Lesson::GetPlace() {
	return Place;
}

char* Lesson::ShowCurrentName() {
	std::cout << "Current name of the lesson:\n";
	return Discipline;
}
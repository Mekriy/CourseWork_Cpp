#include "Teacher.h"
#include <string>
#include <iostream>
#pragma warning (disable : 4996)


Teacher::Teacher() {
	SetSurnameAndInitials("Unknown");
	SetPosition("Unknown");
}
Teacher::~Teacher() {
}

void Teacher::SetSurnameAndInitials(const char* value) {
	SurnameAndInitials = new char[strlen(value)];
	strcpy(SurnameAndInitials, value);
}
void Teacher::SetPosition(const char* value) {
	Position = new char[strlen(value)];
	strcpy(Position, value);
}

char* Teacher::GetSurnameAndInitials() {
	return SurnameAndInitials;
}
char* Teacher::GetPosition() {
	return Position;
}

Teacher Teacher::operator()(const char* NewSurnameAndInitials, const char* NewPosition) {
	SetSurnameAndInitials(NewSurnameAndInitials);
	SetPosition(NewPosition);

	return *this;
}

Teacher Teacher::operator=(const Teacher& tch) {
	if (this == &tch)
		return *this;
	SetSurnameAndInitials(tch.SurnameAndInitials);
	SetPosition(tch.Position);
	return *this;
}
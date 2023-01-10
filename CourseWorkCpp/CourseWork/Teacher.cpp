#include "Teacher.h"
#include <string>

Teacher::Teacher() {
	strcpy(SurnameAndInitials, "Unknown");
	strcpy(Position, "Unknown");
}
Teacher::~Teacher() {
	delete[] SurnameAndInitials, Position;
}

void Teacher::SetSurnameAndInitials(const char* value) {
	strcpy(SurnameAndInitials, value);
}
void Teacher::SetPosition(const char* value) {
	strcpy(Position, value);
}

char* Teacher::GetSurnameAndInitials() {
	return SurnameAndInitials;
}
char* Teacher::GetPosition() {
	return Position;
}
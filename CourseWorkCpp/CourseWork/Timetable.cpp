#include "Timetable.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

Timetable::Timetable() {
	std::cout << "Type how much lessons in the timetable:\n";
	std::cin >> NumberOfLessons;
	AllTheLessons = new Lesson[NumberOfLessons];
}

Timetable::~Timetable() {}

void Timetable::FillLessonsIntoTimetable() {
	for (int i = 0; i < NumberOfLessons; i++) {
		std::cin >> AllTheLessons[i];
	}
}

void Timetable::ShowTimetable() {
	for (int i = 0; i < NumberOfLessons; i++) {
		std::cout << AllTheLessons[i];
	}
}

void Timetable::SaveTimetableIntoFile() {
	std::ofstream IntoFile;
	IntoFile.open("Timetable.txt", std::ofstream::trunc);
	for (int i = 0; i < NumberOfLessons; i++) {
		IntoFile << AllTheLessons[i];
	}
	IntoFile.close();
}
#include "Timetable.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

Timetable::Timetable() {
	std::cout << "Type how much lessons in the timetable:\n";
	std::cin >> NumberOfLessons;
	std::cin.ignore();
	AllTheLessons = new Lesson[NumberOfLessons];
}

Timetable::~Timetable() {}

int Timetable::getNumberOfLessons() {
	return NumberOfLessons;
}

void Timetable::FillLessonsIntoTimetable() {	
	for (int i = 0; i < NumberOfLessons; i++) {
		std::cin >> AllTheLessons[i];
	}
}

void Timetable::ShowTimetable() {
	auto it = Timetable::Iterator(begin());
	while (it != end()) {
		std::cout << *it << std::endl;
		it++;
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
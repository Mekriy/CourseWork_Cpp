#include "Timetable.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

Timetable::Timetable() {
	AllTheLessons = new Lesson[0];
}

Timetable::~Timetable() {}

void Timetable::SetSizeOfTimetable(int value) {
	NumberOfLessons = value;
	AllTheLessons = new Lesson[NumberOfLessons];
}

void Timetable::FillLessonsIntoTimetable() {
	std::cin.ignore();
	for (int i = 0; i < NumberOfLessons; i++) {
		std::cin >> AllTheLessons[i];
	}
}

void Timetable::ShowTimetable() {
	for (Iterator it = Timetable::Iterator(BeginOfTimetable()); it != EndOfTimetable(); it++) {
		std::cout << *it << std::endl;
	}
}
void Timetable::ShowTimetable(int value) {
	Iterator it = Timetable::Iterator(BeginOfTimetable());
	it += value;
	if (it <= EndOfTimetable())
		std::cout << *it << std::endl;
	else
		std::cout << "Invalid number!\n";
}

void Timetable::SaveTimetableIntoFile() {
	std::ofstream IntoFile;
	IntoFile.open("Timetable.txt", std::ofstream::trunc);
	for (Iterator it = Timetable::Iterator(BeginOfTimetable()); it != EndOfTimetable(); it++) {
		IntoFile << *it;
	}
	IntoFile.close();
}
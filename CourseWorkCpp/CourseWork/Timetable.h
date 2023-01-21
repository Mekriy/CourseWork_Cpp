#pragma once
#include "Lesson.h"
class Timetable
{
	int NumberOfLessons;
	Lesson* AllTheLessons;

public:
	class Iterator;
	Timetable();
	~Timetable();
	Lesson& operator[](const int& value) {
		if (value > 0 && value < NumberOfLessons) {
			return AllTheLessons[value];
		}
		return AllTheLessons[0];
	}

	Iterator begin() { return AllTheLessons; }
	Iterator end() { return AllTheLessons + NumberOfLessons; }

	int getNumberOfLessons();
	void FillLessonsIntoTimetable();
	void ShowTimetable();
	void SaveTimetableIntoFile();

	class Iterator {
		Lesson* CurrentLesson;
	public:
		Iterator(Lesson* first) : CurrentLesson(first){}

		Lesson& operator+(int value) { return *(CurrentLesson + value); }
		Lesson& operator-(int value) { return *(CurrentLesson - value); }

		Lesson& operator++(int) { return *CurrentLesson++; }
		Lesson& operator--(int) { return *CurrentLesson--; }
		Lesson& operator++() { return *++CurrentLesson; }
		Lesson& operator--() { return *--CurrentLesson; }

		bool operator!= (const Iterator& it) { return CurrentLesson != it.CurrentLesson; }
		bool operator==(const Iterator& it) { return CurrentLesson == it.CurrentLesson; }
		Lesson& operator* () { return *CurrentLesson; }
	};
};


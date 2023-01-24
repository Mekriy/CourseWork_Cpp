#pragma once
#include "Lesson.h"
class Timetable
{
	int NumberOfLessons;
	Lesson* AllTheLessons;

public:
	Timetable();
	~Timetable();
	
	void SetSizeOfTimetable(int value);
	void FillLessonsIntoTimetable();
	void ShowTimetable();
	void ShowTimetable(int value);
	void SaveTimetableIntoFile();

	Lesson& operator[](const int& value) {
		if (value > 0 && value < NumberOfLessons) {
			return AllTheLessons[value];
		}
		return AllTheLessons[0];
	}

	class Iterator;
	Iterator BeginOfTimetable() { return AllTheLessons; }
	Iterator EndOfTimetable() { return AllTheLessons + NumberOfLessons; }
	class Iterator {
		Lesson* CurrentLesson;
	public:
		Iterator(Lesson* first) : CurrentLesson(first){}

		Lesson& operator* () { return *CurrentLesson; } // using

		Lesson& operator+=(int value) { return *(CurrentLesson += value); } // using
		Lesson& operator++(int) { return *CurrentLesson++; } // using

		bool operator!= (const Iterator& it) { return CurrentLesson != it.CurrentLesson; } // using
		bool operator>= (const Iterator& it) { return CurrentLesson >= it.CurrentLesson; } // using
		bool operator<= (const Iterator& it) { return CurrentLesson <= it.CurrentLesson; } // using
	};
};
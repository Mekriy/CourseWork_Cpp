#pragma once
#include "Lesson.h"
class Timetable
{
	int NumberOfLessons;
	Lesson* AllTheLessons;

public:
	Timetable();
	~Timetable();

	void FillLessonsIntoTimetable();
	void ShowTimetable();
	void SaveTimetableIntoFile();
};


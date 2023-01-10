#pragma once
#include "Student.h";
#include "Teacher.h";

class Lesson : public Student, public Teacher
{
	char* Discipline, * TypeOfLesson, * Date, * Time, * Place;
public:
	Lesson();
	~Lesson();

	void SetDiscipline(const char* value);
	void SetTypeOfLesson(const char* value);
	void SetDate(const char* value);
	void SetTime(const char* value);
	void SetPlace(const char* value);

	char* GetDiscipline();
	char* GetTypeOfLesson();
	char* GetDate();
	char* GetTime();
	char* GetPlace();
};


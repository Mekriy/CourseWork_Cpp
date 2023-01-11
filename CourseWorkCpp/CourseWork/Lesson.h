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

	friend std::istream& operator>>(std::istream& is, Lesson& ls) {
		std::cout << "Enter discipline of the lesson:\n";
		is.getline(ls.Discipline, 256);
		std::cout << "Enter type of the lesson:\n";
		is.getline(ls.TypeOfLesson, 256);
		std::cout << "Enter date when the lesson will be:\n";
		is.getline(ls.Date, 256);
		std::cout << "Enter time when the lesson will be:\n";
		is.getline(ls.Time, 256);
		std::cout << "Enter place where the lesson will be:\n";
		is.getline(ls.Place, 256);
		return is;
	}
	friend std::ostream& operator<<(std::ostream& os, const Lesson& ls) {
		os << "Discipline of the lesson " << ls.Discipline << "\nType of the lesson: " << ls.TypeOfLesson << "\nDate of the lesson: " << ls.Date << "\nTime of the lesson: " << ls.Time << "\nPlace of the lesson: " << ls.Place << std::endl;
		return os;
	}

	char* ShowCurrentName() override;
};


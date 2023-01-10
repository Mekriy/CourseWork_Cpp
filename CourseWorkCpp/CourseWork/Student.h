#pragma once
#include <iostream>
class Student
{
	char* Group, *Surname, *Mark;
public:
	Student();
	~Student();

	void SetGroup(const char* value);
	void SetSurname(const char* value);
	void SetMark(const char* value);

	char* GetGroup();
	char* GetSurname();
	char* GetMark();

	Student operator()(const char* NewGroup, const char* NewSurname, const char* NewMark);
	Student operator=(const Student& st);

	friend std::istream& operator>>(std::istream& is, Student& st);
	friend std::ostream& operator<<(std::ostream& os, const Student& st);
};

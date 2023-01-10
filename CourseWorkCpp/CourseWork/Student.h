#pragma once
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
};

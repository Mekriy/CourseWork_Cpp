#pragma once
#include <iostream>
class Teacher
{
	char* SurnameAndInitials, *Position;
public:
	Teacher();
	~Teacher();

	void SetSurnameAndInitials(const char* value);
	void SetPosition(const char* value);

	char* GetSurnameAndInitials();
	char* GetPosition();

	Teacher operator()(const char* NewSurnameAndInitials, const char* NewPosition);
	Teacher operator=(const Teacher& st);

	friend std::istream& operator>>(std::istream& is, Teacher& tch){
		std::cout << "Enter surname and initials of the teacher:\n";
		is >> tch.SurnameAndInitials;
		std::cout << "Enter position of the teacher:\n";
		is >> tch.Position;
		return is;
	}
	friend std::ostream& operator<<(std::ostream& os, const Teacher& tch){
		os << "Surname and initials of the teacher: " << tch.SurnameAndInitials << "\nPosition of the teacher: " << tch.Position << std::endl;
		return os;
	}
};
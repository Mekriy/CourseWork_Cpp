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
		is.ignore();
		std::cout << "Enter surname and initials of the teacher:\n";
		is.getline(tch.SurnameAndInitials, 256);
		std::cout << "Enter position of the teacher:\n";
		is.getline(tch.Position, 256);
		return is;
	}
	friend std::ostream& operator<<(std::ostream& os, const Teacher& tch){
		os << "Surname and initials of the teacher: " << tch.SurnameAndInitials << "\nPosition of the teacher: " << tch.Position << std::endl;
		return os;
	}

	virtual char* ShowCurrentName();
};
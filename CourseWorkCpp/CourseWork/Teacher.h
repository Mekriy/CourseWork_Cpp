#pragma once
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
};


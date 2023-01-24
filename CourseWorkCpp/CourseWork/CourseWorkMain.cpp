#include "Lesson.h"
#include "Timetable.h"
#include <iostream>

using std::cout;
using std::cin;

Student stud;
Teacher tch;
Timetable tmtb;

void Menu(Student& stud);
void Menu(Teacher& tch);
void Menu(Timetable& tmtb);

int main() {
	cout << "Choose what you would like to proceed:\n1. Options about student\n2. Options about teacher\n3. Options about timetable\n";
	unsigned int choice;
	cin >> choice;
	switch (choice) {
	case 1: {
		Menu(stud);
	}
	case 2: {
		Menu(tch);
	}
	case 3: {
		Menu(tmtb);
	}
	default: {
		cout << "Invalid input.\n";
		main();
		break;
	}
	}
}

void Menu(Student& stud) {
	cout << "What do you want to do:\n1. Write information about student\n2. Show information about student\n3. Change information\n";
	unsigned int choice;
	cin >> choice;
	switch (choice) {
	case 1: {
		cin >> stud;
		main();
	}
	case 2: {
		cout << "Your information about student:\n";
		cout << stud;
		main();
	}
	case 3: { // Make edit option flexible
		cin >> stud;
		main();
	}
	}
}

void Menu(Teacher & tch) {
	cout << "What do you want to do:\n1. Write information about teacher\n2. Show information about teacher\n3. Change something\n";
	unsigned int choice;
	cin >> choice;
	switch (choice) {
	case 1: {
		cin >> tch;
		main();
		break;
	}
	case 2: {
		cout << "Your information about teacher:\n";
		cout << tch;
		main();
		break;
	}
	case 3: { // Make edit option flexible
		cin >> tch;
		main();
		break;
	}
	default: {
		cout << "Invalid input.\n";
		main();
		break;
	}
	}
}

void Menu(Timetable& tmtb){
	cout << "What do you want to do:\n1. Fill up timetable\n2. Show timetable\n3. Change something\n4. Save into file\n";
	unsigned int choice;
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "Type how many lessons will be:\n";
		cin >> choice;
		tmtb.SetSizeOfTimetable(choice);
		tmtb.FillLessonsIntoTimetable();
		main();
		break;
	}
	case 2: {
		cout << "Your timetable for today:\n";
		tmtb.ShowTimetable();
		main();
		break;
	}
	case 3: { // flexible edit
		tmtb.FillLessonsIntoTimetable();
		main();
		break;
	}
	case 4: {
		tmtb.SaveTimetableIntoFile();
		cout << "Succesfully saved!\n";
		main();
		break;
	}
	default: {
		cout << "Invalid input!\n";
		main();
		break;
	}
	}
}
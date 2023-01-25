#include "Lesson.h"
#include "Timetable.h"
#include <iostream>

using std::cout;
using std::cin;

void MainMenu(Student& studn, Teacher& tich, Timetable& timtb);

int main() {
	Student stud;
	Teacher tch;
	Timetable tmtb;

	MainMenu(stud, tch, tmtb);
}

void MainMenu(Student& studn, Teacher& tich, Timetable& timtb) {
	cout << "Choose what you would like to proceed:\n1. Options about student\n2. Options about teacher\n3. Options about timetable\n";
	unsigned int choice;
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "What do you want to do:\n1. Write information about student\n2. Show information about student\n3. Change information\n";
		unsigned int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cin >> studn;
			MainMenu(studn, tich, timtb);
		}
		case 2: {
			cout << "Your information about student:\n";
			cout << studn;
			MainMenu(studn, tich, timtb);
		}
		case 3: { // Make edit option flexible
			cin >> studn;
			MainMenu(studn, tich, timtb);
		}
		}
	}
	case 2: {
		cout << "What do you want to do:\n1. Write information about teacher\n2. Show information about teacher\n3. Change something\n";
		unsigned int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cin >> tich;
			MainMenu(studn, tich, timtb);
			break;
		}
		case 2: {
			cout << "Your information about teacher:\n";
			cout << tich;
			MainMenu(studn, tich, timtb);
			break;
		}
		case 3: { // Make edit option flexible
			cin >> tich;
			MainMenu(studn, tich, timtb);
			break;
		}
		default: {
			cout << "Invalid input.\n";
			MainMenu(studn, tich, timtb);
			break;
		}
		}
	}
	case 3: {
		cout << "What do you want to do:\n1. Fill up timetable\n2. Show timetable\n3. Change something\n4. Save into file\n";
		unsigned int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Type how many lessons will be:\n";
			cin >> choice;
			timtb.SetSizeOfTimetable(choice);
			timtb.FillLessonsIntoTimetable();
			MainMenu(studn, tich, timtb);
			break;
		}
		case 2: {
			cout << "Your timetable for today:\n";
			timtb.ShowTimetable();
			MainMenu(studn, tich, timtb);
			break;
		}
		case 3: { // flexible edit
			timtb.FillLessonsIntoTimetable();
			MainMenu(studn, tich, timtb);
			break;
		}
		case 4: {
			timtb.SaveTimetableIntoFile();
			cout << "Succesfully saved!\n";
			MainMenu(studn, tich, timtb);
			break;
		}
		default: {
			cout << "Invalid input!\n";
			MainMenu(studn, tich, timtb);
			break;
		}
		}
	}
	default: {
		cout << "Invalid input.\n";
		MainMenu(studn, tich, timtb);
		break;
	}
	}
}
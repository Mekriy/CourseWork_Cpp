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
	cout << "+--------------------------------------------+\n";
	cout << "|   Choose what you would like to proceed:   |\n+--------------------------------------------+\n|\t1. Options about student\t     |\n|\t2. Options about teacher\t     |\n|\t3. Options about timetable\t     |\n|\t4. Check another options\t     |\n";
	cout << "+--------------------------------------------+\n";
	unsigned int choice;
	cout << "=>";
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "+--------------------------------------------+\n";
		cout << "|\t  What do you want to do:\t     |\n|   1. Write information about student\t     |\n|   2. Show information about student\t     |\n|   3. Change information\t\t     |\n";
		cout << "+--------------------------------------------+\n";
		unsigned int choice;
		cout << "=>";
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
		case 3: {
			char* temp1 = new char[50], * temp2 = new char[50], * temp3 = new char[50];
			cout << "What do you want to edit?\n1. Group\n2. Surname\n3. Mark\n4. Everything\n";
			cin >> choice;
			switch (choice) {
			case 1: {
				cin.ignore();
				cout << "Type group:\n";
				cin.getline(temp1, 50);
				temp2 = studn.GetSurname();
				temp3 = studn.GetMark();
				studn(temp1, temp2, temp3);
				cout << "Edited succesfully!\n";
				cout << studn;
				MainMenu(studn, tich, timtb);
				break;
			}
			case 2: {
				cin.ignore();
				cout << "Type surname:\n";
				cin.getline(temp2, 50);
				temp1 = studn.GetGroup();
				temp3 = studn.GetMark();
				studn(temp1, temp2, temp3);
				cout << "Edited succesfully!\n";
				cout << studn;
				MainMenu(studn, tich, timtb);
				break;
			}
			case 3: {
				cin.ignore();
				cout << "Type Mark:\n";
				cin.getline(temp3, 50);
				temp1 = studn.GetGroup();
				temp2 = studn.GetSurname();
				studn(temp1, temp2, temp3);
				cout << "Edited succesfully!\n";
				cout << studn;
				MainMenu(studn, tich, timtb);
				break;
			}
			case 4: {
				cin >> studn;
				MainMenu(studn, tich, timtb);
			}
			default: {
				cout << "Invalid input.";
				MainMenu(studn, tich, timtb);
			}
			}
			delete[] temp1, temp2, temp3;
			break;
		}
		}
	}
	case 2: {
		cout << "+--------------------------------------------+\n";
		cout << "|\t  What do you want to do:\t     |\n|   1. Write information about teacher\t     |\n|   2. Show information about teacher\t     |\n|   3. Change information\t\t     |\n";
		cout << "+--------------------------------------------+\n";
		unsigned int choice;
		cout << "=>";
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
		case 3: {
			char* temp1 = new char[50], * temp2 = new char[50];
			cout << "What do you want to edit?\n1. Surname and initials\n2. Position\n3. Everything\n";
			cin >> choice;
			switch (choice) {
			case 1: {
				cin.ignore();
				cout << "Type Surname and Initials:\n";
				cin.getline(temp1, 50);
				temp2 = tich.GetPosition();
				tich(temp1, temp2);
				cout << "Edited succesfully!\n";
				cout << tich;
				MainMenu(studn, tich, timtb);
				break;
			}
			case 2: {
				cin.ignore();
				cout << "Type position\n";
				cin.getline(temp2, 50);
				temp1 = tich.GetSurnameAndInitials();
				tich(temp1, temp2);
				cout << "Edited succesfully!\n";
				cout << tich;
				MainMenu(studn, tich, timtb);
				break;
			}
			case 3: {
				cin >> tich;
				MainMenu(studn, tich, timtb);
				break;
			}
			default: {
				cout << "Invalid input.";
				MainMenu(studn, tich, timtb);
			}
			}
			delete[] temp1, temp2;
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
		cout << "+--------------------------------------------+\n";
		cout << "|\tWhat do you want to do:\t\t     |\n|   1.Fill up timetable\t\t\t     |\n|   2.Show timetable\t\t\t     |\n|   3.Save into file\t\t\t     |\n";
		cout << "+--------------------------------------------+\n";
		unsigned int choice;
		cout << "=>";
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
		case 3: {
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
	case 4: {
		cout << "+--------------------------------------------------+\n";
		cout << "|\tThere is 3 options\t\t\t   |\n|  1. Check overloaded () and = of student object  |\n|  2. Check late binding of student object\t   |\n|  3. Check overloaded () and = of teacher student |\n";
		cout << "+--------------------------------------------------+\n";
		unsigned int choice;
		cout << "=>";
		cin >> choice;
		switch (choice) {
		case 1: {
			Student studn2;
			char *temp1 = new char[50], * temp2 = new char[50], * temp3 = new char[50];
			cin.ignore();
			cout << "Type group\n";
			cin.getline(temp1, 255);
			cout << "Type surname\n";
			cin.getline(temp2, 255);
			cout << "Type mark\n";
			cin.getline(temp3, 255);

			studn2(temp1, temp2, temp3);
			cout << "Used overloaded ()\n";
			cout << studn2;
			cout << "Used overloaded =\n";
			studn2 = studn;
			cout << studn2;
			MainMenu(studn, tich, timtb);
			delete[] temp1, temp2, temp3;
			break;
		}
		case 2: {
			cout << "Need to create and type 1 object lesson\n";
			Lesson les;
			cin >> les;
			Student* stud = &les;
			cout << "Now late binding by student object: \n";
			cout << stud->ShowCurrentName() << std::endl;
			MainMenu(studn, tich, timtb);
			break;
		}
		case 3: {
			Teacher tich2;
			char* temp1 = new char[50], * temp2 = new char[50];
			cin.ignore();
			cout << "Type Surname and Ititials\n";
			cin.getline(temp1, 50);
			cout << "Type position\n";
			cin.getline(temp2, 50);

			tich2(temp1, temp2);
			cout << "Used overloaded ()\n";
			cout << tich2;
			cout << "Used overloaded =\n";
			tich2 = tich;
			cout << tich2;
			MainMenu(studn, tich, timtb);
			break;
		}
		default:
			cout << "Invalid input!\n";
			MainMenu(studn, tich, timtb);
			break;
		}
	}
	default: {
		cout << "Invalid input.\n";
		MainMenu(studn, tich, timtb);
		break;
	}
	}
}
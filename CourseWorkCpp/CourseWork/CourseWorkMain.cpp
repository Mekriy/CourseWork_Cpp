#include "Lesson.h"
#include "Timetable.h"
//#include "Iterator.h"
#include <iostream>

using std::cout;
using std::cin;

int main() {
	/*Student stu, stu2;
	Teacher tich;
	Lesson les;
	cout << "Here #1: " << stu << "\n" << tich << "\n";
	stu("KN-22", "Pasternak", "100");
	tich("Volynets E.O.", "Lecturer");
	cout << "Here #2: " << stu << "\n" << tich << "\n";

	cin >> stu2;
	cout << "Here #3: " << stu2 << "\n";
	stu = stu2;
	cout << "Here #4: " << stu << "\n";
	cin >> les;
	Student* stu3 = &les;
	cout << "Here #5:\n" << stu3->ShowCurrentName() << "\n";*/
	/*cout << "Here #6:\n";
	Timetable tmtb;
	tmtb.FillLessonsIntoTimetable();
	cout << "Here #7:\n";
	tmtb.ShowTimetable();
	cout << "Here #8:\n";
	tmtb.SaveTimetableIntoFile();*/
	Timetable tmtb;
	tmtb.FillLessonsIntoTimetable();
	tmtb.ShowTimetable();
}
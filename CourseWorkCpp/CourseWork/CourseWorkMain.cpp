#include "Lesson.h"
#include "Timetable.h"
#include <iostream>

using std::cout;
using std::cin;

int main() {
	Student stu, stu2;
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
	cout << "Here #5:\n" << stu3->ShowCurrentName() << "\n";
	cout << "Here #6:\n";
	
	Timetable tmtb;
	tmtb.FillLessonsIntoTimetable();
	cout << "Here #7:\n";
	tmtb.ShowTimetable();
	cout << "Here #8:\n";
	tmtb.SaveTimetableIntoFile();
	cout << "Here #9:\n";
	int value;
	cout << "Your value:\n";
	cin >> value;
	tmtb.ShowTimetable(value);
	cout << "All Timetable:\n";
	tmtb.ShowTimetable();
}

/*
	About all this operator overloads in Timetable.h:
	Unuseable operators are commented in Timetable.h

	1. I need to make a Menu (->) where I can freely use iterator with this overloads.
	->(Or not? Yeah probably need to. Like use everything I tested but in a Menu)

	2. I mean "+" and "-" are not quite good here, probably replace with "=" so I could type exactly what lesson I want. (<-)
	 <- (So, basically "=" can't be used cuz it needs to create an iterator object. 
	 About "+" and "-": (a) + works good, (b) - ain't working at all. 
	 (b) Why? Simple. When iterator object is created it has 1 object of an array of objects
	 So that's why - won't work, it substracting to negative numbers which are not exists.
	 (a) "+" adds to this first object, no remembering last option at all. Maybe a problem, maybe not. Idk.)

	3. Next, do I really need "++" prefix and postfix? Probably use only second one.
	 Haven't checked yet.

	4. Also I dont need "==" so just delete this.
	 Haven't checked yet.

	5. Is it good to use this iterator class in Timetable class? I should try to separate him from timetable.
	 Haven't checked yet.
*/
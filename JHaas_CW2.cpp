/*
  Class: CMSC140 CRN  20808
  Instructor: Aygun Huseyin
  Project: Classwork 2
  Description: display information about my programing class
  Due Date: 9/14
  I pledge that I have completed the programming assignment independently.
  I have not copied the code from a student or any source.
  I have not given my code to any student.
  Print your Name here: jalcyn
*/
#include <iostream>

using namespace std;
int main()
{
	const string courseName = "CMSC140", programmingLang = "C++";
	auto classLocation = "SW 213", classMeetTime = "2:00 PM - 3:15 PM";
//display info in one cout and all on seprate lines
	cout << "Cource name: " << courseName << endl 
		<< "Programing language: " << programmingLang << endl 
		<< "Classroom location: Room " << classLocation << endl 
		<< "Class meeting time: " << classMeetTime << endl;
	return 0;
}
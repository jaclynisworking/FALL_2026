/*
 * Class: CMSC140 CRN 20808
 * Instructor: Huseyin Aygun
 * Project<claswork 3 >
 * Description: (calculates the grades)
 * Due Date: 9/24
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here Jaclyn Haas
*/

#include <iostream>
#include <iomanip>
#include <string> // for getline to work

using namespace std;

int main() 
{
	// Declare variable for user's name
	string usser;
	// Declare variables for grades
	double syllabus, chap1, chap2, cw1, cw2;
	const string SC_0_100 = "Score ranging from 0 to 100: "; // Declare a constant string for score range so i dont need to tpye each time


	cout << "Enter Student's name: ";
	getline(cin, usser);

	cout << "\nEnter Syllabus Quiz " << SC_0_100;
	cin >> syllabus;

	cout << "\nEnter Chapter 1 Quiz " << SC_0_100;
	cin >> chap1;

	cout << "\nEnter Chapter 2 Quiz " << SC_0_100;
	cin >> chap2;

	cout << "\nEnter Classwork 1 " << SC_0_100;
	cin >> cw1 ;

	cout << "\nEnter Classwork 2 " << SC_0_100;
	cin >> cw2;

	double finalScore = (syllabus + chap1 + chap2 + cw1 + cw2);
	double average = ((syllabus + chap1 + chap2 + cw1 + cw2) / 5);

	cout << usser << ": Final Score: " << finalScore << setprecision(2)<< fixed <<" Average Score: " << average << endl;

	return 0;
}
/*
* Programmer: Jaclyn Haas
* Course : CMSC140 CRN 20808
* Semester : Fall 2026
* Project : Personal Finance Calculator / project 1
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/


#include <iostream> //needed for input and output
#include <iomanip> // needed for formatting output
#include <string> // i fixed a bug i think 

using namespace std;

int main() {
	// declare constants and variables in order used in program
	const string STAR66 = "******************************************************************"; // prints 66 *
	const string PER_FIN_CAL = "Personal Finance Calculator"; // so i don't need to type it out every time
	const string ENT_YR_MTLY = "Enter your monthly "; // so i don't need to type it out every time
	string usserName; // declares string for user name
	double grossIncome = 0.00,
		groceryExpenses = 0.00,
		utilityExpenses = 0.00, 
		rent = 0.00; //declare doubles to store user input for given variabls
	const double TAX_RATE = 0.15; // declares constant for tax rate

	const string PROGRAMER_NAME = "Jaclyn Haas", // declares constants for info in footer
		COURSE = "CMSC140 CRN 20808", 
		SEMESTER = "Fall 2026", 
		DUE_DATE = "09/28/2026"; 


	cout << STAR66 << endl;
	cout << PER_FIN_CAL << endl;
	cout << "Welcome! This program will help you analyze your monthly finances." << endl;
	cout << STAR66 << endl << endl;


	cout << "Please enter your full name: ";
	getline(cin, usserName);// saves user input for name

	cout << setprecision(2) << fixed << showpoint;
	cout << ENT_YR_MTLY << "gross income: ";
	cin >> grossIncome; // saves user input for gross income

	cout << ENT_YR_MTLY << "grocery expenses: ";
	cin >> groceryExpenses; //saves user input for grocery expenses

	cout << ENT_YR_MTLY << "utility expenses: ";
	cin >> utilityExpenses; //saves user input for utility expenses

	cout << ENT_YR_MTLY << "rent: ";
	cin >> rent; // saves user input for rent
	cout << endl;
	
	double monthlyExpenses = (groceryExpenses + utilityExpenses + rent);// Calculate monthly expenses
	double estimatedTax = (grossIncome * TAX_RATE); // calculates estimated tax
	double netMonthlyIncome = (grossIncome - (estimatedTax + monthlyExpenses)); // calculates net monthly income
	double monthlySavings = (grossIncome - monthlyExpenses); // calculates amount available for savings
	double savingsPercentage = ((monthlySavings / grossIncome) * 100.0); // calculates savings percentage

	cout << STAR66 << endl;// prints 66 *'s
	cout << "FINANCIAL SUMMARY" << endl;
	cout << left << setw(32) << "Name: "
		 <<	right << setw(8) << usserName << endl; // it works when it is set to 8 but not 10 so 8 it is
	cout << left << setw(32) << "Monthly gross income:" << "$ "
		 << right << setw(8) << grossIncome << " " << endl;
	cout << left << setw(32) << "Monthly expenses:" << "$ "
		 << right << setw(8) << monthlyExpenses << " " << endl;
	cout << left << setw(32) <<"Estimated Tax (15%):" << "$ "
		 << right << setw(8) << estimatedTax << " " << endl;
	cout << left << setw(32) << "Net Monthly Income:" << "$ "
		 << right << setw(8) << netMonthlyIncome << " " << endl;
	cout << left << setw(32) << "Amount Available for Savings:" << "$ "
		 << right << setw(8) << monthlySavings << " " << endl; 
	cout << left << setw(32) << "Savings Percentage:" 
		 << right << setw(10) << savingsPercentage << "%" << endl << endl; // and this only looks right when it is set to 10

	cout << left << "Thank you for using the " << PER_FIN_CAL << ". Goodbye!" << endl << endl;

		//code footer ^_^
	cout << "Programmer Name: " << PROGRAMER_NAME << endl;
	cout << "Course: " << COURSE << endl;
	cout << "Semester: " << SEMESTER << endl;
	cout << "Project: " << PER_FIN_CAL << endl;
	cout << "Due Date: " << DUE_DATE << endl;
	
	return 0;
}
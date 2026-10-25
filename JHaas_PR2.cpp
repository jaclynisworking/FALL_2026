/**
* Programmer: Jaclyn Haas
* Course: CSMC140 CRN 20808
* Semester: Fall 2026
* Project: Project 2 Grade calculator
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const string STAR = "*************************************",// to make display easyeer to format
		LINES = "================",
		STUD = "Student";
	string stu1_ID, stu1Name, stu1Age;//names string for student 1  ID, full name, and age 
	string stu2_ID, stu2Name, stu2Age; //names string for student 2  ID, full name, and age
	double stu1Score, stu2Score; // declare for score 
	char stu1LettGrade = 'z', stu2LettGrade = 'z'; // stores letter (A)grade 
	string stu1FinGrade, stu2FinGrade; // stores (A+,B-) grad 

	cout << "Montgomery College" << endl;
	cout << "CMSC140 - Project 2: Grade Calculator" << endl;
	cout << STAR << endl << endl;

	cout << "Enter Information for two students." << endl<< endl;

	cout << STUD << " 1 ID: ";
	cin >> stu1_ID;
	cout << STUD << " 1 full name: ";
	cin.ignore();
	getline(cin, stu1Name);
	cout << STUD << " 1 age: ";
	cin >> stu1Age;
	cout << STUD << " 1 exam score (0-100): ";
	cin >> stu1Score;

	cout << endl << endl << STUD << " 2 ID: ";
	cin >> stu2_ID;
	cout << STUD << " 2 full name: ";
	cin.ignore();
	getline(cin, stu2Name);
	cout << STUD << " 2 age: ";
	cin >> stu2Age;
	cout << STUD << " 2 exam score (0-100): ";
	cin >> stu2Score;

	//display header for grade report
	cout << endl << endl << LINES << " Grade Report (UMD) " << LINES << endl;


	int validScore = 0; // declare variable track how many entered scores are valid
	string stu1Remark, stu2Remark; // var for to store stu 1 ans 2 remarks

	if (stu1Score <= 100 && stu1Score >= 0) // test Student 1 score to see if valid 
	{
		validScore += 1;
		//set stu 1 fine grade(A+) to stu1FinGrade
		if (stu1Score <= 100 && stu1Score >= 95)
			stu1FinGrade = "A +";
		else if(stu1Score < 95 && stu1Score >= 93) 
			stu1FinGrade = "A";
		else if(stu1Score < 93 && stu1Score >= 90)
			stu1FinGrade = "A-";
			//B 89-80
		else if(stu1Score < 90 && stu1Score >= 87)
			stu1FinGrade = "B +";
		else if(stu1Score < 87 && stu1Score >= 83)
			stu1FinGrade = "B";
		else if(stu1Score < 83 && stu1Score >= 80)
			stu1FinGrade = "B-";
			//C 79-70	
		else if(stu1Score < 80 && stu1Score >= 77)
			stu1FinGrade = "C +";
		else if(stu1Score < 77 && stu1Score >= 73)
			stu1FinGrade = "C";
		else if(stu1Score < 73 && stu1Score >= 70)
			stu1FinGrade = "C-";
			//D 69-60
		else if(stu1Score < 70 && stu1Score >= 67)
			stu1FinGrade = "D +";
		else if(stu1Score < 67 && stu1Score >= 63)
			stu1FinGrade = "D";
		else if(stu1Score < 63 && stu1Score >= 60)
			stu1FinGrade = "D-";
			//F 59-0
		else if (stu1Score < 60 && stu1Score >= 0)
			stu1FinGrade = "F";
		else
			stu1FinGrade = "error";

		//sets stu 1 letter grade  (A)
		if (stu1Score <= 100 && stu1Score >= 90)
			stu1LettGrade = 'A';
		else if (stu1Score < 90 && stu1Score >= 80)
			stu1LettGrade = 'B';
		else if (stu1Score < 80 && stu1Score >= 70)
			stu1LettGrade = 'C';
		else if (stu1Score < 70 && stu1Score >= 60)
			stu1LettGrade = 'D';
		else if (stu1Score < 60 && stu1Score >= 0)
			stu1LettGrade = 'F';
		else
			stu1LettGrade = 'E';
		
		//set student 1 remark
		switch (stu1LettGrade)
		{
			case 'A':
				stu1Remark = "Excellent performance";
				break;
			case 'B':
				stu1Remark = "Good performance";
				break;
			case 'C':
				stu1Remark = "Satisfactory performance";
				break;
			case 'D':
				stu1Remark = "Needs improvement";
				break;
			case 'F':
				stu1Remark = "Unsatisfactory performance";
				break;
			default:
				stu1Remark = "ERROR";
				break;
		}
	}
	else //student 1 score invalid
	{
		stu1FinGrade = "N / A";
		stu1Score = 0.0;
		stu1Remark = "Invalid score";
	}

	if (stu2Score <= 100 && stu2Score >= 0) // test Student 2 score to see if valid 
	{
		validScore += 1;
		//set stu 2 fine grade(A+) to stu2FinGrade
		if (stu2Score <= 100 && stu2Score >= 95)
			stu2FinGrade = "A +";
		else if (stu2Score < 95 && stu2Score >= 93)
			stu2FinGrade = "A";
		else if (stu2Score < 93 && stu2Score >= 90)
			stu2FinGrade = "A-";
		//B 89-80
		else if (stu2Score < 90 && stu2Score >= 87)
			stu2FinGrade = "B +";
		else if (stu2Score < 87 && stu2Score >= 83)
			stu2FinGrade = "B";
		else if (stu2Score < 83 && stu2Score >= 80)
			stu2FinGrade = "B-";
		//C 79-70	
		else if (stu2Score < 80 && stu2Score >= 77)
			stu2FinGrade = "C +";
		else if (stu2Score < 77 && stu2Score >= 73)
			stu2FinGrade = "C";
		else if (stu2Score < 73 && stu2Score >= 70)
			stu2FinGrade = "C-";
		//D 69-60
		else if (stu2Score < 70 && stu2Score >= 67)
			stu2FinGrade = "D +";
		else if (stu2Score < 67 && stu2Score >= 63)
			stu2FinGrade = "D";
		else if (stu2Score < 63 && stu2Score >= 60)
			stu2FinGrade = "D-";
		//F 59-0
		else if (stu2Score < 60 && stu2Score >= 0)
			stu2FinGrade = "F";
		else
			stu2FinGrade = "error";

		//sets stu 2 letter grade  (A)
		if (stu2Score <= 100 && stu2Score >= 90)
			stu2LettGrade = 'A';
		else if (stu2Score < 90 && stu2Score >= 80)
			stu2LettGrade = 'B';
		else if (stu2Score < 80 && stu2Score >= 70)
			stu2LettGrade = 'C';
		else if (stu2Score < 70 && stu2Score >= 60)
			stu2LettGrade = 'D';
		else if (stu2Score < 60 && stu2Score >= 0)
			stu2LettGrade = 'F';
		else
			stu2LettGrade = 'E';

		//set stubent 2 remark
		switch (stu2LettGrade)
		{
		case 'A':
			stu2Remark = "Excellent performance";
			break;
		case 'B':
			stu2Remark = "Good performance";
			break;
		case 'C':
			stu2Remark = "Satisfactory performance";
			break;
		case 'D':
			stu2Remark = "Needs improvement";
			break;
		case 'F':
			stu2Remark = "Unsatisfactory performance";
			break;
		default:
			stu2Remark = "ERROR";
			break;
		}
	}
	else //student 2 score invalid
	{
		stu2FinGrade = "N / A";
		stu2Score = 0.0;
		stu2Remark = "Invalid score";
	}

	double scoreAve;
	if (validScore>=1)
		scoreAve = ((stu1Score + stu2Score) / 2.0);

	//display  row 1
	cout << left <<setw(10) << "ID";
	cout << setw(20) << "Name";
	cout << right << setw(3) << "Age";
	cout << setw(8) << "Score";
	cout << setw(8) << "Grade";
	cout << left <<" "<< setw(10) << "Remark" << endl;
	cout << "-------------------------------------------------------------------------" << endl;

	//display  row 2/ student 1 info
	cout << setw(10) << stu1_ID;
	cout << setw(20) << stu1Name;
	cout << right << setw(3) << stu1Age;
	cout << setw(8) << fixed << setprecision(1) << stu1Score;
	cout << setw(8) <<setprecision(0) << fixed << stu1FinGrade;
	cout << left << " " << setw(10) << stu1Remark << endl;

	//display  row 3/ student 2 info
	cout << setw(10) << stu2_ID;
	cout << setw(20) << stu2Name;
	cout << right << setw(3) << stu2Age;
	cout << setw(8) << fixed << setprecision(1) << stu2Score;
	cout << setw(8) <<setprecision(0)<< fixed << stu2FinGrade;
	cout << left << " " << setw(10) << stu2Remark;

	//display  row 4/ second header/ calculaton header
	cout << endl << endl;
	cout << LINES << " Class Summary " << LINES << endl;


	if (validScore >= 1)
	{ //show grade display
		cout << setw(25) << "Number of valid scores" << ": " << validScore << endl;
		cout << setw(25) << "Average score" << ": " << 
			setprecision(1)<< fixed << scoreAve << endl;
		
		cout << setw(25) << "Maximum score" << ": ";
		//displays larger score
		if(stu1Score>=stu2Score)
			cout << stu1Score << endl;
		else if (stu2Score > stu1Score)
			cout << stu2Score << endl;
		else
			cout << "error" << endl;
	
		cout << setw(25)<< "Minimum score" << ": ";
		//displays smaller score
		if (stu1Score <= stu2Score)
			cout << stu1Score << endl;
		else if (stu2Score < stu1Score)
			cout << stu2Score << endl;
		else
			cout << "error" << endl;
	
		cout << endl << endl;
		cout << setprecision(0) << fixed;

		// displays programer info/footer
		cout << "Programmer: Jaclyn Haas" << endl;
		cout << "Course: CMSC140 CRN 20808" << endl;
		cout << "Semester: Fall 2026" << endl;
		cout << "CMSC140 Project 2" << endl;
		cout << "Due Date: 10/12/26" << endl;
	}
	else
	{
		cout << "No valid scores entered. Average, max, and min cannot be computed.";
	}

	return 0; 
}
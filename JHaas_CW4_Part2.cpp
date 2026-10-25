/*
* Class: CMSC140 CRN 20808
* Instructor: Aygun Huseyin
* Project<Classwork 4 part 2>
* Description: (determans the price of a sighn baced on numbers of colors used,
	if lights are put in, and if old sighn needs to be removed)
* Due Date:10/2012/26
* I pledge that I have completed the programming assignment independently.
*I have not copied the code from a student or any source.
*I have not given my code to any student.
*Print your Name here: Jaclyn Haas
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	int numColors;
	
	cout << "Enter the number of colors in the sign: ";
	cin >> numColors;

	if (numColors<=0)
	{
		cout << "Invalid number of colors; it must be greater than zero.";
	}
	else if (numColors > 0)
	{

		int basePrice;

		// calculate base price based on the number of colors. 
		switch (numColors)
		{
		case 1:
			basePrice = 250;
			break;
		case 2:
			basePrice = 325;
			break;
		case 3:
			basePrice = 450;
			break;
		case 4:
			basePrice = 625;
			break;
		default:// 5 or more colors
			basePrice = 850;
			break;
		}

		string  isLighted, removeOld;
		cout << "Do you want a lighted sign(y/n)? ";
		cin >> isLighted;

		cout << "Do you need an old sign removed(y/n)? ";
		cin >> removeOld;

		double lightCost = 0.00;

		//stores price after adding cost of lighted or not lighted to base price
		if (isLighted == "y" || isLighted == "Y" || isLighted == "yes" || isLighted == "Yes")
		{
			lightCost = (1.25 * basePrice);
		}
		else if (isLighted == "n" || isLighted == "N" || isLighted == "no" || isLighted == "No")
		{
			lightCost = basePrice;
		}
		else
		{
			cout << "Invalid input for lighted sign; it must be 'y' or 'n'.";
		}

		double removeCost = 0.00;

		//calculate cost of removing old sign   
		if (removeOld == "y" || removeOld == "Y" || removeOld == "yes" || removeOld == "Yes")
		{
			removeCost = (0.10 * basePrice);
		}
		else if (removeOld == "n" || removeOld == "N" || removeOld == "no" || removeOld == "No")
		{
			removeCost = 0;
		}
		else 
		{
			cout << "Invalid input for removing old sign; it must be 'y' or 'n'.";
		}
		
		double totalPrice;
		totalPrice = lightCost + removeCost;
		cout << "The price is: $" << fixed << setprecision(2) << totalPrice;

	}

	return 0;
}
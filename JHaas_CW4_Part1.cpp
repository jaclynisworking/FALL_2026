/*
* Class: CMSC140 CRN 20808
* Instructor:Aygun Huseyin
* Classwork 4 part 1
* Description: (calculates the cost of Disney tickets with discounts on bulk purchases)
* Due Date:10/12/2026
* I pledge that I have completed the programming assignment independently.
I have not copied the code from a student or any source.
I have not given my code to any student.
Print your Name here:Jaclyn Haas
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double ticketsSold;
	double tempPrice = 0.00; // for before discounts applied
	double totalCost = 0.00;// for after discounts aplied
	const double PRICE1_TICKET = 109.00;

	cout << "How many days of tickets were sold? ";
	cin >> ticketsSold;


	//only will display if more than 0 tickets were sold
	if (ticketsSold > 0)
	{
		//calculates price
		tempPrice = (ticketsSold * PRICE1_TICKET);

		//calculate discount 
		if (ticketsSold >= 3 && ticketsSold <= 4)
			totalCost = (tempPrice * 0.90); //10% discount
		else if (ticketsSold >= 5 && ticketsSold <= 6)
			totalCost = (tempPrice * 0.75); //25% discount
		else if (ticketsSold >= 7 && ticketsSold <= 9)
			totalCost = (tempPrice * 0.67); //33% discount
		else if (ticketsSold >= 10)
			totalCost = (tempPrice * 0.58); //42% discount
		else
			totalCost = tempPrice; //no discount

		cout << "The total cost of the purchase is  $" << setprecision(2) << fixed << totalCost << endl;

	}

	else
		cout << "Tickets sold must be greater than zero.";

	return 0;
}
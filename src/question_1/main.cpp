#include <iostream>
#include <iomanip>
#include "question1.h"

using namespace std;

const int Number_Employees = 7;

int main()
{
	double hours;
	double rate;
	int count;

	PayRoll employees[Number_Employees];

	cout << "\n \nWelcome to PayRoll Calculator \n \nCalculate gross pay by entering the hours worked by " << Number_Employees;
	cout << " employees and their hourly rates. \n \n";
	for (count = 0; count < Number_Employees; count++)
	{
		cout << "Hours worked by employee #" << (count +1);
		cout << ": ";
		cin >> hours; employees[count].set_hours(hours);

		cout << "Hourly pay rate for employee #"<< (count +1);
		cout <<  ": $";
		cin >> rate; employees[count].set_pay_rate(rate);
	}

	cout << "\nHere is the gross pay for each employee:\n";
	cout << setprecision(2) << fixed<< showpoint << right;
	for (count = 0; count < Number_Employees; count++)

	{
		cout << "Employee #"<< (count+1) << ": ";
		cout << setw(3) << "$"<< employees[count].get_gross_pay() << endl;
	}

    return 0;
}
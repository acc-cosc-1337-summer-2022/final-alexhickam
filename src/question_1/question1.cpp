#include <iostream>
#include <cstdlib>
#include "question1.h"

bool test_config()
{
    return true;
}

using std::cout; using std::cin; using namespace std;



void PayRoll::set_hours(double h)
{
	if (h < 0)
	{
		cout << "\n\n*********************\n\nInvalid value for hours. \nRestart program and do not use negative values.\n\n*********************\n\n";
		exit(EXIT_FAILURE);

	}
	else
		hours = h;
};
	
void PayRoll::set_pay_rate(double r)
{
	if (r < 0)
	{
		cout << "\n\n*********************\n\nInvalid value for pay rate. \nRestart program and do not use negative values.\n\n*********************\n\n";
		exit(EXIT_FAILURE);
	}
	else
		rate = r;
};

double PayRoll :: set_gross_pay()
{
	double total_pay= hours * rate;
	return total_pay;
}
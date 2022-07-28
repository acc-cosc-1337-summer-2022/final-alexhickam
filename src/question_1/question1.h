
#ifndef QUESTION1_H
#define QUESTION1_H
#include <iostream>

bool test_config();

class PayRoll 

{
public:
	PayRoll()
	{
		hours = 0;
		rate = 0;		
	}
	void set_hours(double);

	void set_pay_rate(double);
	
	double get_hours() const
	{
		return hours;
	}
	double get_pay_rate() const
	{
		return rate;
	}
	double get_gross_pay() const
	{
		return hours * rate;
	}

private:

	double hours; 
	double rate;  
};

#endif

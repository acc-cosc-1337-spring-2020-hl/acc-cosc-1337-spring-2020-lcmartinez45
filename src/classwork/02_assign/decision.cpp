#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double gross = hours * hourly_rate;
	double overtime_hours = hours - 40;
	double overtime_pay = hourly_rate * 1.5 * overtime_hours;
	
	if (hours > 40)
	{
		gross = gross + overtime_pay;
	}
	else
	{
		gross = hours * hourly_rate;
	}
	return gross;
}

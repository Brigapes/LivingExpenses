#include "Life.h"
#include <iostream>

void Life::SetRent(int input)
{	Rent = input;}

void Life::SetHourRate(double input)
{	HourRate = input;}

void Life::SetWorkDays(int input)
{	WorkDays = input;}

void Life::SetWorkHours(int input)
{	WorkHours = input;}

void Life::SetExpenses(double input)
{	Expenses = input;}

void Life::PrintAll()
{
	std::cout << "You work for " << GetHourRate() << " per hour, "<<GetWorkHours()<<" hours across "<< GetWorkDays()<< " days in a week." << std::endl;
	std::cout << "You will have " << 24 - (GetWorkHours() / GetWorkDays() + 8) << " free hours in a day. Spending " << GetWorkHours() / GetWorkDays() << " work hours + 8 hours of sleep" << std::endl;
	std::cout << "You will earn " << GetMonthWage() << " a month, working "<< GetWorkHours()*4<< " hours a month." << std::endl;
	std::cout << "Which makes " << GetYearWage() << " a year without expenses and paying a tax income." << std::endl;
	std::cout << "Your tax rate per income will be " << GetTaxRate() << "%. \n" << std::endl;
	std::cout << "Final leftover money will be " << FinalLeftover() << " in a year, which is "<< FinalLeftover()/12 <<" a month. \n \n" << std::endl;
}

void Life::SetTaxRate()
{
	double wage = GetYearWage();
	if (wage<11500)
	{TaxRate = 0;}
	else if (wage > 11500 && wage < 45000) {TaxRate= 20;}
	else if (wage > 45000 && wage < 150000) { TaxRate = 40; }
	else { TaxRate = 45; }
	
}


Life::Life() {
	SetTaxRate();
	double HourRate = 8;
	double MonthWage = WorkDays*WorkHours;
	double YearWage = MonthWage * 12;
	int WorkDays = 6;
	int Rent = 450;
	int WorkHours = 35;
	double Expenses = 200;

}

double Life::FinalLeftover() {

	return ((GetYearWage() - (GetYearWage() / 100 - GetTaxRate())) - Rent*12 - Expenses*12);

}
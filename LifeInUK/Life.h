#pragma once


class Life {

public:
	//Constructor
	Life();


	//Getters
	double GetYearWage() { return GetMonthWage()*12; };
	double GetMonthWage() { return (GetWorkHours()*GetHourRate())*4; };
	double GetHourRate() { return HourRate; };
	double GetWorkDays() { return WorkDays; };
	double GetWorkHours() { return WorkHours; };
	int GetTaxRate() { SetTaxRate(); return TaxRate; };
	int GetRent() { return Rent; };

	double FinalLeftover();

	//Setters 
	void SetRent(int);  
	void SetHourRate(double);
	void SetWorkDays(int);
	void SetWorkHours(int);
	void SetExpenses(double);

	//Print
	void PrintAll();
	
    //Tax Rate is automatic
	//Wage is automatic


private:
	void SetTaxRate();
	int TaxRate;
	double HourRate;
	double MonthWage;
	double YearWage;
	int WorkDays;
	int Rent;
	int WorkHours;
	double Expenses;
	

};
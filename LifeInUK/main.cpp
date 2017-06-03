#include <iostream>
#include <string>
#include <vector>
#include "Life.h"


int main() {

	Life UK;  //Start a life
	
	std::cout << "Financial life emulator, made by Ugreen. Feel free to use it. Enter numbers only! \n \n" << std::endl;

	std::cout << "Let's start with your living accomodations. Enter monthly rent: " << std::endl;
	double exp;
	std::cin >> exp;
	UK.SetRent(exp);

	std::cout << "Now try to think all other expenses, like food for example (again monthly): " << std::endl;
	std::cin >> exp;
	UK.SetExpenses(exp);

	std::cout << "Now it's time for a job! For how much per hour will you work? " << std::endl;
	std::cin >> exp;
	UK.SetHourRate(exp);

	std::cout << "How many days in a week will you work? " << std::endl;
	std::cin >> exp;
	UK.SetWorkDays(exp);

	std::cout << " How many hours in that week? " << std::endl;
	std::cin >> exp;
	UK.SetWorkHours(exp);

	std::cout << " \n \n Now displaying a conlusion: " << std::endl;
	
	UK.PrintAll();
	std::cin >> exp;

}
#include <iostream>
#include <string>
#include "clsDate.h"
using namespace std;

int main()
{
	clsDate Date1;
	Date1.Print();

	clsDate Date2("1/1/2025");
	Date2.Print();

	clsDate Date3(200, 2025);
	Date3.Print();

	clsDate Date4(23, 7, 2025);
	Date4.Print();

	Date1.IncreaseDateByOneDay();
	Date1.Print();

	Date1.IncreaseDateByOneWeek();
	Date1.Print();

	Date1.IncreaseDateByOneMonth();
	Date1.Print();

	Date1.IncreaseDateByOneDecade();
	Date1.Print();

	Date1.IncreaseDateByOneCentury();
	Date1.Print();

	Date1.IncreaseDateByOneMillennium();
	Date1.Print();

	cout << "Number Of Business Days From ";
	Date2.Print();
	cout << "To ";
	Date4.Print();
	cout << clsDate::CalculateBusinessDay(Date2, Date4) << " Days" << endl;

	cout << "Number Of Vacation Days From ";
	Date2.Print();
	cout << "To ";
	Date4.Print();
	cout << clsDate::NumberOfVacationDays(Date2, Date4) << " Days" << endl;

	cout << "Difference between ";
	Date2.Print();
	cout << "and ";
	Date4.Print();
	cout << clsDate::GetDifferenceInDays(Date2, Date4) << " Days" << endl;

	Date1.DecreaseDateByOneDay();
	Date1.Print();

	Date1.DecreaseDateByOneWeek();
	Date1.Print();

	Date1.DecreaseDateByOneMonth();
	Date1.Print();

	Date1.IncreaseDateByOneDecade();
	Date1.Print();

	Date1.DecreaseDateByOneCentury();
	Date1.Print();

	Date1.DecreaseDateByOneMillennium();
	Date1.Print();

	system("pause > 0");
	return 0;
}
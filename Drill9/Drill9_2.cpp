#include "../std_lib_facilities.h"

struct Date {
	int year, month, day;
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y;
	else
		error("Invalid year");
	if (m < 13 && m > 0)
		month = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		day = d;
	else
		error("Invalid day");
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31) 
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

int main()
try {
	Date today {1978, 06, 25};
	
	cout << "Today: " << today.year << ". " << today.month << ". " << today.day << ".\n";

	Date tomorrow = today;
	tomorrow.add_day(1);

	cout << "Tomorrow: " << tomorrow.year << ". " << tomorrow.month << ". " << tomorrow.day << ".\n";

	
	return 0;	
} 

catch (exception& e) 
	{
		cout << "Error: " << e.what() << '\n';
		return 1;
	}

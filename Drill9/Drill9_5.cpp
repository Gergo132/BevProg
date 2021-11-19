#include "../std_lib_facilities.h"

class Year {
	static constexpr int min = 1800;
	static constexpr int max = 2200;
public:
class Invalid { };
	Year(int x) : y{x} { if (x<min || max<=x) throw Invalid{}; }
	int year() { return y; }
	void increment() { y++;}
private:
	int y;
};

enum class Month {
jan=1, feb, mar, apr, may, june, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m)
{
	return os << int(m);
}
ostream& operator<<(ostream& os, Year y)
{
	return os << y.year();
}
Year operator++(Year& y)
{
	y.increment();
	return y;
}
class Date {
	Year ye;
	Month mo;
	int da;
public:
	class Invalid{};
	Date(Year y, Month m, int d): ye(y), mo(m), da(d) {if(!valid()) throw Invalid{};}
	bool valid();
	Month month() const { return mo; }
	int day() const { return da; }
	Year year() const { return ye; }
	void add_day(int n);
	void add_month(int n);
	void add_year(int n);
};

bool Date::valid()
{
	if(da > 0 && da <= 31 ) return true;
	else return false;
}
void Date::add_day(int n)
{

	da += n;

	if(da > 31) 
	{
		++mo;
		da-= 31;
	}

	if(mo == Month::jan) 
	{
		++ye;
	}
}
void Date::add_month(int n)
{
	++mo;

	if(mo == Month::jan) 
	{
		++ye;
	}
}
void Date::add_year(int n)
{
	++ye;
}

int main()
{
	try{
	Date today {Year{1978}, Month::june, 25};

	cout << "Today: " << today.year() << ". " << today.month() << ". " << today.day() << ".\n";

	Date tomorrow = today;
	tomorrow.add_day(1);

	cout << "Tomorrow: " << tomorrow.year() << ". " << tomorrow.month() << ". " << tomorrow.day() << ".\n";

	return 0;
	}
	catch(Date::Invalid)
	{
		cerr << "Error: Invalid date" << '\n';
		return 1;
	}
	
	catch(Year::Invalid)
	{
		cerr << "Error: Invalid year"<<'\n';
		return 2;
	}
	
	catch(exception& e)
	{
		cerr << "Error: " << e.what() << '\n';
		return 3;
	}
}

#include "std_lib_facilities.h"

	int main() 
	{
	
	/*
		//1. 2. 3. 4. 5.
		double a = 0.0, b= 0.0;
		
		cout<< "Enter two numbers (press '|' to exit):\n";
		while(cin >> a >> b)
			{ 
					
				if (a < b)
				{
						
				cout << "the smaller value is:" << a << '\t' << "the larger value is:" << b << "\n";
					if (b-a < 0.01)
						{
							cout << "the numbers are almost equal\n";
						}
				}
					
				else if (b < a)
				{
						 
				cout << "the smaller value is:" << b << '\t' << "the larger value is:" << a << "\n";
					if (a-b < 0.01)
						{
							cout << "the numbers are almost equal\n";
						}
				}
						
				else if (a == b)
				{
						
				cout << "the numbers are equal\n";
						
				}	
		
			}
		*/	
		
		
			
		double a, b, sum = 0;
		double large = -10000;
		double small = 10000;
		string unit;
		vector<double> values;
		
		constexpr double m_to_cm = 100;
		constexpr double in_to_cm = 2.54;
		constexpr double ft_to_in = 12;
		
		
		cout << "Enter a number and a unit (only cm, m, in, ft is valid; all units will be converted to meter; press '|' to exit).\n";
		while(cin >> a >> unit)
			{
				
								
				if (unit == "m")
					{
						b = a;
						cout << b << "m" << "\n";
					}
					
				else if (unit == "cm")
					{
						b = a/m_to_cm;
						cout << b << "m" << "\n";
					}
					
				else if (unit == "in")
					{
						b = a*in_to_cm/m_to_cm;
						cout << b << "m" << "\n";
					}
				
				else if (unit == "ft")
					{
						b = a*ft_to_in*in_to_cm/m_to_cm;
						cout << b << "m" << "\n";
					}		
					
				else cout << "Invalid unit!\n";
					
				
				if(b > large)
					{
						cout << "the largest so far:" << b << "m" << "\n";
						large = b;
					}
					
					
				if(b < small) 
					{
						cout << "the smallest so far:" << b << "m" << "\n";
						small = b;
					}
					

				sum += b;
				values.push_back(b);
				
			}
			
			cout << "sum of numbers: " << sum << " m" << "\n";
			cout << "smallest number: " << small << " m" << "\n";
			cout << "largest number: " << large << " m" << "\n";
			cout << "values entered:\n";
			sort(values);
			for (int i = 0; i < values.size(); ++i)
			{
				cout << values[i] << " m" << "\n";
			}
			
	return 0;
	}

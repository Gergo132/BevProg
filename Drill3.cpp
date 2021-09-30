#include "std_lib_facilities.h"

  int main() {

  
	string first_name;
	  
	cout << "Enter the name of the person you want to write to:\n";
	cin >> first_name;
	cout << "Dear " << first_name << ", \n";
	cout << "\t" "How are you? I am fine. I miss you. I hope we will hang out in the near future.\n";
	
	
	string friend_name;
	
	cout << "Write other friend's name:\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	
	
	char friend_sex = '0';
	
	cout <<"Write m if male or f if female.\n";
	cin >> friend_sex;
	
	if (friend_sex == 'm')
		{
		
		cout << "If you see " << friend_name << " please ask him to call me.\n";
			
		}
	else if (friend_sex == 'f')
		{
		
		cout << "If you see " << friend_name << " please ask her to call me.\n";
		
		}
	else
	
		{
		
		cout << "If you see " << friend_name << " please ask them to call me.\n";
		
		}
	
	int age;
	
	cout << "Age of friend:\n";
	cin >> age;
	
	if (age <= 0 || age >= 110)
		{
		
		simple_error("your're kidding!\n");
		
		}
		
	else 
		{
		
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";
		
		}
		
	if (age < 12)
		{
		
		cout << "Next year you will be " << age+1 << ".\n";
		
		}
	
	else if (age == 17)
		{
		
		cout << "Next year you will be able to vote.\n";
		
		}
	
	else if (age >= 70)
		{
		
		cout << "I hope you are enjoying retirement.\n";
		
		}
	
	cout << "Yours sincerely, \n \n";
	cout << "Gergő\n";
	
  return 0;
}

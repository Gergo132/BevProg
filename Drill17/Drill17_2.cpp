#include "../std_lib_facilities.h"


void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i) 
		os << a[i] << ' ';
		os << '\n';
}


void elsof() 
{
	int* p1 = new int(7);

		cout << "pointer " << p1 << " points to " << *p1 << '\n';

	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};

		cout << "pointer " << p2 <<" points to " << *p2 << '\n';

	for (int j = 0; j < 7; ++j)
		cout << p2[j] << '\t';
		cout << '\n';


	int* p3 = p2;
	p2 = p1;
	p2 = p3;

		cout << "pointer " << p1 << " points to " << *p1 << '\n';
		cout << "pointer " << p2 << " points to " << *p2 << '\n';

	delete p1;
	delete[] p2;
}


void masodikf()
{
	int* p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	int* p2 = new int[10];

		for (int m = 0; m < 10; ++m)
			p2[m] = p1[m];
	    
		for (int k = 0; k < 10; ++k)
			cout << p2[k] << '\t';
			cout << '\n';
			
		delete[] p1;
		delete[] p2;
}


void harmadikf() 
{
	vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> v2 (10);
	v2 = v1;

		for (int v : v2) cout << v << '\t';
		cout << '\n';
}
int main()
{
	elsof();
	
	masodikf();
	
	harmadikf();
    
    
    return 0;
}

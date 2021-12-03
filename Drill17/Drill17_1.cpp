#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i) 
		os << a[i] << ' ';
		os << '\n';
		
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i) 
		os << a[i] << ' ';
		os << '\n';
		
}

void print_vector(ostream& os, vector<int> v)
{
	for (int i = 0; i < v.size(); ++i) 
		os << v[i] << ' ';
		os << '\n';
	
}

int main()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
		cout << '\n';
	delete[] arr;    


	int* x = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
		print_array10(cout, x);
	
	int* y = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
		print_array(cout, y, 11);
		
	int* z = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
		print_array(cout, z, 20);
		
		delete[] x;
		delete[] y;
		delete[] z;
		
		
	vector<int> xv = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
		print_vector(cout, xv);
		
	vector<int> yv = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
		print_vector(cout, yv);
		
	vector<int> zv = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
		print_vector(cout, zv);
		
		
	return 0;
}

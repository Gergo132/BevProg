#include "std_lib_facilities.h"

 struct Point {
 	int x;
 	int y;
 };

 int main(){
 	try{

 	cout << "Please enter x and y 7 times\n";	
 	vector<Point> original_points;

 	int x;												
 	int y;
 	int i = 0;

 	while(i < 7 && cin >> x >> y ){
 		original_points.push_back(Point{x, y});
 		i++;
 	}
 	cout << "\n\nOriginal points:\n";

 	for(auto a : original_points)
 		cout  << a.x << ' ' << a.y << '\n'; 

 	ofstream ofile {"mydata.txt"};

 	if(!ofile) error("Can't open mydata.txt");	

 	for(auto& Point : original_points){
 		ofile << Point.x << ' ' << Point.y << '\n';
 	}
 	ofile.close();


 	ifstream ifile {"mydata.txt"};

 	if(!ifile) error("Can't open mydata.txt");

 	vector<Point> processed_points;

 	while(ifile >> x >> y){
 		processed_points.push_back(Point{x,y});
 	}

 	cout << "\n\nProcessed points:\n";

 	for(auto a : processed_points){
 		cout  << a.x << ' ' << a.y << '\n'; 
 	}

 	ifile.close();

 	if(original_points.size() != processed_points.size())
 		error("Something's wrong!");

 	return 0;

 	}
 	catch(runtime_error& e){
 		cerr << "Error: " << e.what() << "\n";
 		return 1;
 	}  
 	catch(...){
 		cerr << "Some error" << '\n';
 		return 2;
 	}
 } 

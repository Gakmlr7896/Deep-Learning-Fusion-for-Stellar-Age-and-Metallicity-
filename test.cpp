// This is a test cpp file for educational uses , Its ""NOT"" a part of the project and will be deleted

#include <iostream>
#include <cmath> 
using namespace std;

double square(double x) {
	return x*x;
}

void print_square(double x) {
	cout << "The square of " << x << " is " << square(x) << "\n" << endl;
}

int main(){
	print_square(2);
	double s2 = sqrt(4);
	cout << "The square root of 4 is " << s2 << endl;
	return 0;
}
		

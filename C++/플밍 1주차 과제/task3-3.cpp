#include<iostream>
using namespace std;

int main() {
	double C, F;
	cout << "Put the degree in Celsius: ";
	cin >> C;
	F = 1.8*C + 32.0;
	
	cout << "The degree in Fahrenheit is: " << F;
	return 0;
}

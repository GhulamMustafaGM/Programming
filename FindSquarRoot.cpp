#include <iostream> 
#include <cmath>

using namespace std;

int main()
{
	double number, squareRoot;

	cout << "Enter a number: ";
	cin >> number;

	// sqrt () is a library function to calculate square root 
	squareRoot = sqrt(number);
	cout << "square root of " << number << " = " << squareRoot;
		return 0;
}
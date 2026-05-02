#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int shape = 0;
	float value1 = 0;
	float value2 = 0;


	cout << "Geometry Calculator\n	1. Calculate the Area of a Circle\n	2. Calculate the Area of a Rectangle\n	3. Calculate the Area of a Triangle\n	4. Quit\n	Enter your choice(1-4) :";
	cin >> shape;


	// out of bounds
	if (shape > 4 || shape < 1)
		cout << "Error, please input a valid option";


	// Circle Question and Calculation
	if (shape == 1) {
		cout << "What is the radius of the circle?\n";
		cin >> value1;
		if (value1 <= 0) {
			cout << "not a valid input";
			return 0;
		}
		cout << "The area of the circle is " << 3.14159 * pow(value1, 2);
	}


	// Rectangle Question and Calculation
	if (shape == 2) {
		cout << "What is the height of the rectangle?\n";
		cin >> value1;
		cout << "What is the width of the rectangle?\n";
		cin >> value2;
		if (value1 <= 0 || value2 <= 0) {
			cout << "not a valid input";
			return 0;
		}
		cout << "The area of the rectangle is " << value1 * value2;
	}


	//Triangle Questipn and Calculation
	if (shape == 3) {
		cout << "What is the base of the triangle?\n";
		cin >> value1;
		cout << "What is the height of the triangle?\n";
		cin >> value2;
		if (value1 <= 0 || value2 <= 0) {
			cout << "not a valid input";
			return 0;
		}
		cout << "The area of the triangle is " << (value1 * value2) / 2;
	}


	// Quitting
	if (shape == 4) {
		cout << "quitting program...";
		return 0;
	}

	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	cout << "Enter the first number : ";
	cin >> a;
	cout << "Enter the second number : ";
	cin >> b;
	cout << "Enter the third number : ";
	cin >> c;
	int perimeter = a + b + c;
	cout << "Perimeter: " << perimeter << endl;
	cout << "Square:" << sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c)) << endl;
	if (a == b or a == c or b == c) {
		cout << "Triangle is isosceles.";
	}
	else {
		cout << "Triangle is equilateral.";
	}

	


}

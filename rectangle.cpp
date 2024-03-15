#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	cout << "Enter the first number : ";
	cin >> a;
	cout << "Enter the second number : ";
	cin >> b;
	int perimeter = 2*(a + b);
	cout << "Perimeter: " << perimeter << endl;
	cout << "Square:" << (a*b) << endl;
	cout << "Diagonal lrngth : "<< sqrt(a*a+b*b);
	return 0;
}

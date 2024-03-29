#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	cout << "Enter the first number : ";
	cin >> a;
	cout << "Enter the second number : ";
	cin >> b;
	if (a < 0 or b < 0) {
		cout << "Ne correctnoe znachenie" << endl;
	}
	else {
		int perimeter = 2 * (a + b);
		cout << "Perimeter: " << perimeter << endl;
		cout << "Square:" << (a * b) << endl;
		cout << "Diagonal length : " << sqrt(a * a + b * b);
		return 0;
	}
}

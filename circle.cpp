#include <iostream>
#include <iomanip> 
const double pi = 3.14; // вводим константу pi, которая будет являтся числом пи и даём ей значение равное 3,14
using namespace std;

int main() {
	float rad, a; // ввод переменных радиус(rad) и угл для кругового сектора(a)
	cout << "Enter radius ";
	cin >> rad; // вводим значение радиуса
	cout << "Enter seqtor ";
	cin >> a; // вводим значение угла для кругового сектора 
	float lenght = 2 * pi * rad; // нахождение длины окружности через формулу с помощью числа пи и радиуса ум
	float square = pi * rad * rad; // нахождение площади окружности через формулу с помощью числа пи и радиуса
	float square_sector = square * a / 360; // нахождение площади кругового сектора через формулу с помощью площади окружности и угла кругового сектора
	cout << fixed << setprecision(2) << lenght << endl; // вывод длины окружности, с помощью setprecision делаем, чтобы после запятой было две цифры
	cout << fixed << setprecision(2) << square << endl; // вывод площади окружности, с помощью setprecision делаем, чтобы после запятой было две цифры
	cout << fixed << setprecision(2) << square_sector << endl; // вывод площади кругового сектора, с помощью setprecision делаем, чтобы после запятой было две цифры
}
#include <iostream>
#include <iomanip> 
const double pi = 3.14; // ������ ��������� pi, ������� ����� ������� ������ �� � ��� �� �������� ������ 3,14
using namespace std;

int main() {
	float rad, a; // ���� ���������� ������(rad) � ��� ��� ��������� �������(a)
	cout << "Enter radius ";
	cin >> rad; // ������ �������� �������
	cout << "Enter seqtor ";
	cin >> a; // ������ �������� ���� ��� ��������� ������� 
	float lenght = 2 * pi * rad; // ���������� ����� ���������� ����� ������� � ������� ����� �� � ������� ��
	float square = pi * rad * rad; // ���������� ������� ���������� ����� ������� � ������� ����� �� � �������
	float square_sector = square * a / 360; // ���������� ������� ��������� ������� ����� ������� � ������� ������� ���������� � ���� ��������� �������
	cout << fixed << setprecision(2) << lenght << endl; // ����� ����� ����������, � ������� setprecision ������, ����� ����� ������� ���� ��� �����
	cout << fixed << setprecision(2) << square << endl; // ����� ������� ����������, � ������� setprecision ������, ����� ����� ������� ���� ��� �����
	cout << fixed << setprecision(2) << square_sector << endl; // ����� ������� ��������� �������, � ������� setprecision ������, ����� ����� ������� ���� ��� �����
}
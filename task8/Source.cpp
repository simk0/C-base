#include <iostream>
#include <string>
#include "Windows.h"
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name[] = { "��������","³������","������","�������","�'������", "������", "�����"};
	int number = 0;
	cout << "������� ����� �����:"; cin >> number;
	if (number <= 0 || number > 7) {
		cout << "����� �� ����� �����." << endl;
	}
	else {
		cout << name[number - 1] << endl;
	}
}
#include <iostream>
#include <string>
#include "Windows.h"
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name[] = { "Понеділок","Вівторок","Середа","Четверг","П'ятниця", "Субота", "Неділя"};
	int number = 0;
	cout << "Введыть номер тижня:"; cin >> number;
	if (number <= 0 || number > 7) {
		cout << "Ввели не вірний номер." << endl;
	}
	else {
		cout << name[number - 1] << endl;
	}
}
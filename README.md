#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP (1251);
	SetConsoleOutputCP(1251);

	double a;
	cout << "Введіть тризначне число a: ";
	cin >> a;
	int b1, b2;
    b1 = int(a) / 100; //C
    b2 = static_cast<int>(a) / 100; //C++
	cout << "Перша цифра = " << b1 << endl; 
	cout << "Перша цифра = " << b2 << endl;
}

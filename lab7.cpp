#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Введіть тризначне число: ";
    cin >> a;
    int b = a / 100;
    int c = (a / 10) % 10;
    int d = a % 10;
    (b != c && c != d && d != b) ? cout << "Усі три цифри є різними" : cout << "Є повторюваність цифр";
}

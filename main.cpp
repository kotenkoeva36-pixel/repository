﻿#include <iostream>
#include "stdio.h"
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);// Це використовується для того, щоб використовувати кирилицю

    int a = 3, c = 5;
    double b = sqrt(c * c - a * a);
    double S = a * b * 0.5;
    cout << "Катет b = " << b << endl;
    cout << "Площа  S = " << S << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Введіть тризначне число: "; 
    cin >> a;
    int b = a / 100; // Команда для знаходження першого числа
    int c = (a / 10) % 10;
    int d = a % 10;
    (b != c && c != d && d != b) ? cout << "Усі три цифри є різними" : cout << "Є повторюваність цифр";
}

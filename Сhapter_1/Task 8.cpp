#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a;
    cout << "Введите ваше число: ";
    cin >> a;
    cout << "Вы ввели число: " << a;
    return 0;
}
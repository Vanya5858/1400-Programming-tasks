#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a;
    cout << "Введите число: ";
    cin >> a;
    cout << a << " – вот какое число Вы ввели.";
    return 0;
}
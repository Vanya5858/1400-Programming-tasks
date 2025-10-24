#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a, b, x, y;
    cout << "Наш ряд изначально:\n\n";
    cout << "a) 2 кг\t\t" << "б) a  1\t\t" << "в) x y\n" << "   13 17\t" << "   19 b\t\t" << "   5 y\n\n";
    cout << "Введите значение для a: ";
    cin >> a;
    cout << "Введите значение для b: ";
    cin >> b;
    cout << "Введите значение для x: ";
    cin >> x;
    cout << "Введите значение для y: ";
    cin >> y;
    cout << "\nРяд после внесение изменений: \n\n";
    cout << "a) 2 кг\t\t" << "б) " << a << " 1\t\t" << "в) " << x << " " << y << "\n";
    cout << "   13 17\t" << "   19 " << b << "\t\t" << "   5 " << y << "\n\n";
}
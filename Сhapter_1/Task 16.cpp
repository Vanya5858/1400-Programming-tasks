#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int t, v, x, y;
    cout << "Наш ряд изначально:\n\n";
    cout << "a) 5 10\t\t" << "б) 100  t\t\t" << "в) x 25\n" << "   7 см\t\t" << "   1949 v\t\t" << "   x y\n\n";
    cout << "Введите значение для t: ";
    cin >> t;
    cout << "Введите значение для v: ";
    cin >> v;
    cout << "Введите значение для x: ";
    cin >> x;
    cout << "Введите значение для y: ";
    cin >> y;
    cout << "\nРяд после внесение изменений: \n\n";
    cout << "a) 5 10\t\t" << "б) 100  " << t << "\t\t" << "в) " << x << " 25\n"; 
    cout << "   7 см\t\t" << "   1949 " << v << "\t\t" << "   " << x << " " << y << "\n\n";
}
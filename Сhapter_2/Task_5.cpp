#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double x;
    cout << "Введите радиус вашей окружности для нахождения диаметра : ";
    cin >> x;
    cout << "Ответ: D = " << x * 2 << "\n\n";
    return 0;
}
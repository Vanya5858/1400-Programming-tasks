#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double R;
    const double PI = 3.14159265;
    cout << "\t\tВычисление длины окружности и площади круга, через радиус окружности\n\n";
    cout << "Введите значение радиуса окружности: ";
    cin >> R;
    cout << "Ответ: C(Длина окр.) = " << 2 * PI * R << "; S(Площадь круга) = " << PI * R * R << "\n";
    return 0;
}
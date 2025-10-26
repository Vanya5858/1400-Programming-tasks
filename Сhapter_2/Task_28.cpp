#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415926;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, angle_degrees;

    // Ввод данных
    cout << "\t\t\tВычисление площади равнобедренной трапеции\n";
    cout << "Введите длину большего основания a: ";
    cin >> a;
    cout << "Введите длину меньшего основания b: ";
    cin >> b;
    cout << "Введите угол при большем основании (в градусах): ";
    cin >> angle_degrees;

    // Проверка корректности данных
    if (a <= 0 || b <= 0 || angle_degrees <= 0 || angle_degrees >= 90) {
        cout << "Ошибка: некорректные данные!\n";
        cout << "- Основания должны быть положительными\n";
        cout << "- Большее основание должно быть больше меньшего\n";
        cout << "- Угол должен быть между 0 и 90\n";
        return 1;
    }

    if (b >= a) {
        cout << "Ошибка: основание a должно быть больше основания b!\n";
        return 1;
    }

    // Перевод угла из градусов в радианы
    double angle_radians = angle_degrees * PI / 180.0;

    // Вычисление проекции боковой стороны
    double projection = (a - b) / 2;

    // Вычисление высоты трапеции
    double h = projection * tan(angle_radians);

    // Вычисление площади
    double S = (a + b) * h / 2;

    // Вычисление боковой стороны (дополнительно)
    double side = projection / cos(angle_radians);

    // Вывод результата
    cout << "\nРезультат:\n";
    cout << "Большее основание a = " << a << "\n";
    cout << "Меньшее основание b = " << b << "\n";
    cout << "Угол при основании A = " << angle_degrees << "\n";
    cout << "Площадь S = (a + b) * h / 2 = " << S << "\n";

    return 0;
}
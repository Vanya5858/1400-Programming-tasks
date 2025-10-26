#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double V1, V2, S;

    cout << "\t\t\tЗадача на сближение автомобилей\n";

    // Ввод данных
    cout << "Введите скорость первого автомобиля V1 (км/ч): ";
    cin >> V1;
    cout << "Введите скорость второго автомобиля V2 (км/ч): ";
    cin >> V2;
    cout << "Введите расстояние между автомобилями S (км): ";
    cin >> S;

    // Проверка корректности данных
    if (V1 <= 0 || V2 <= 0 || S <= 0) {
        cout << "Ошибка: скорости и расстояние должны быть положительными!\n";
        return 1;
    }

    // Вычисление времени до встречи
    double relative_speed = V1 + V2;  // скорость сближения
    double time = S / relative_speed; // время до встречи в часах

    // Перевод времени в часы и минуты
    int hours = static_cast<int>(time);
    int minutes = static_cast<int>((time - hours) * 60);

    // Вывод результатов
    cout << "\n\nСкорость сближения: " << relative_speed << " км/ч\n";
    cout << "Время до встречи: " << time << " часов\n";
    cout << "Или: " << hours << " часов " << minutes << " минут\n";

    return 0;
}
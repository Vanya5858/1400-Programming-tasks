#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double V1, V2, S;

    cout << "\t\t\tЗадача с автомобилями\n";

    // Ввод данных
    cout << "Введите скорость первого автомобиля V1 (км/ч): ";
    cin >> V1;
    cout << "Введите скорость второго автомобиля V2 (км/ч): ";
    cin >> V2;
    cout << "Введите начальное опережение S (км): ";
    cin >> S;

    // Проверка корректности данных
    if (V1 <= V2) {
        cout << "Ошибка: V1 должен быть больше V2!\n";
        return 1;
    }
    if (S <= 0) {
        cout << "Ошибка: опережение S должно быть положительным!\n";
        return 1;
    }

    // Вычисление
    double relative_speed = V1 - V2;  // скорость удаления
    double time_hours = 0.5;          // 30 минут = 0.5 часа
    double distance_increase = relative_speed * time_hours;  // увеличение расстояния за 30 мин
    double final_distance = S + distance_increase;  // конечное расстояние

    // Вывод результатов
    cout << "\nСкорость удаления: " << relative_speed << " км/ч\n";
    cout << "Время: 30 минут (" << time_hours << " часа)";
    cout << "Увеличение расстояния за 30 мин: " << distance_increase << " км\n";
    cout << "Начальное расстояние: " << S << " км\n";
    cout << "Конечное расстояние: " << final_distance << " км\n";

    return 0;
}
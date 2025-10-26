#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int x, y;

    cout << "\t\t\tОпределение среднего возраста и разницы с ним\n";

    // Ввод возрастов
    cout << "Введите возраст Тани (X): ";
    cin >> x;
    cout << "Введите возраст Мити (Y): ";
    cin >> y;

    // Проверка корректности данных
    if (x <= 0 || y <= 0) {
        cout << "Ошибка: возраст должен быть положительным!" << endl;
        return 1;
    }

    // Вычисление среднего возраста
    double average = (x + y) / 2.0;

    // Вычисление разницы от среднего
    double diff_tanya = abs(x - average);
    double diff_mitia = abs(y - average);

    // Вывод результатов
    cout << "\n\nСредний возраст: " << average << " лет\n\n";
    cout << "Отклонение от среднего:\n";
    cout << "Таня: " << diff_tanya << " лет\n";
    cout << "Митя: " << diff_mitia << " лет\n";

    return 0;
}
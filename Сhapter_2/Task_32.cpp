#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double monitor, system_unit, keyboard, mouse;
    int n;

    cout << "\t\t\tРасчёт стоимости персонального компьютера\n";

    // Ввод стоимостей компонентов
    cout << "Введите стоимость монитора: ";
    cin >> monitor;
    cout << "Введите стоимость системного блока: ";
    cin >> system_unit;
    cout << "Введите стоимость клавиатуры: ";
    cin >> keyboard;
    cout << "Введите стоимость мыши: ";
    cin >> mouse;

    // Проверка корректности данных
    if (monitor < 0 || system_unit < 0 || keyboard < 0 || mouse < 0) {
        cout << "Ошибка: стоимости не могут быть отрицательными!\n";
        return 1;
    }

    // Стоимость одного компьютера
    double one_computer = monitor + system_unit + keyboard + mouse;

    // Стоимость 3 компьютеров
    double three_computers = one_computer * 3;

    // Ввод количества компьютеров
    cout << "Введите количество компьютеров N: ";
    cin >> n;

    if (n < 0) {
        cout << "Ошибка: количество компьютеров не может быть отрицательным!\n";
        return 1;
    }

    // Стоимость N компьютеров
    double n_computers = one_computer * n;

    // Вывод результатов
    cout << "\n\nИтого за один компьютер: " << one_computer << " руб\n";
    cout << "\n";
    cout << "a)Стоимость 3 компьютеров: " << three_computers << " руб\n";
    cout << "б)Стоимость " << n << " компьютеров: " << n_computers << " руб\n";

    return 0;
}
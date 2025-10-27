#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, x;

    // Ввод количества месяцев
    cout << "Введите количество месяцев n: ";
    cin >> n;

    // Проверка корректности данных
    if (n < 0) {
        cout << "Ошибка: количество месяцев не может быть отрицательным!\n\n";
        return 1;
    }

    // Вычисление номера месяца
    x = (n + 1) % 12;
    if (x == 0) x = 12;  // если остаток 0, то это декабрь (12 месяц)

    // Вывод результата
    cout << "С начала 1990 года по некоторый день прошло " << n << " месяцев и 2 дня\n";
    cout << "Текущий месяц: ";
    switch (x) {
    case 1: cout << "январь"; break;
    case 2: cout << "февраль"; break;
    case 3: cout << "март"; break;
    case 4: cout << "апрель"; break;
    case 5: cout << "май"; break;
    case 6: cout << "июнь"; break;
    case 7: cout << "июль"; break;
    case 8: cout << "август"; break;
    case 9: cout << "сентябрь"; break;
    case 10: cout << "октябрь"; break;
    case 11: cout << "ноябрь"; break;
    case 12: cout << "декабрь"; break;
    }
    cout << " (x=" << x << ")" << endl;

    return 0;
}
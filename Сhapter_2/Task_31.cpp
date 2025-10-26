#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double price_candy, price_cookie, price_apple;
    double x, y, z;

    cout << "\t\t\tЗадача про магазин\n";

    // Ввод цен за 1 кг
    cout << "Введите стоимость 1 кг конфет(руб): ";
    cin >> price_candy;
    cout << "Введите стоимость 1 кг печенья(руб): ";
    cin >> price_cookie;
    cout << "Введите стоимость 1 кг яблок(руб): ";
    cin >> price_apple;

    // Ввод количества товаров
    cout << "Введите количество кг конфет: ";
    cin >> x;
    cout << "Введите количество кг печенья: ";
    cin >> y;
    cout << "Введите количество кг яблок: ";
    cin >> z;

    // Проверка корректности данных
    if (price_candy < 0 || price_cookie < 0 || price_apple < 0 ||
        x < 0 || y < 0 || z < 0) {
        cout << "Ошибка: цены и количества не могут быть отрицательными!\n";
        return 1;
    }

    // Вычисление стоимости покупки
    double total_candy = price_candy * x;
    double total_cookie = price_cookie * y;
    double total_apple = price_apple * z;
    double total = total_candy + total_cookie + total_apple;

    // Вывод результата
    cout << "\n--- Чек покупки ---\n";
    cout << "Конфеты: " << x << " кг * " << price_candy << " руб/кг = " << total_candy << " руб\n";
    cout << "Печенье: " << y << " кг * " << price_cookie << " руб/кг = " << total_cookie << " руб\n";
    cout << "Яблоки:  " << z << " кг * " << price_apple << " руб/кг = " << total_apple << " руб\n";
    cout << "-------------------\n";
    cout << "ИТОГО: " << total << " руб\n";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    do {
        cout << "Введите четное число: ";
        cin >> number;

        if (number % 2 != 0) {
            cout << "Ошибка! Число нечетное. Попробуйте снова.\n";
        }
    } while (number % 2 != 0);

    cout << "Спасибо! Вы ввели четное число: " << number << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int x, result, c;

    cout << "Введите трёхзначное число(100 - 999): ";
    cin >> result;
    cout << endl;

    if (result <= 99 || result >= 1000) {
        cout << "Вы ввели некоректные данные! Введите трёхзначное число!\n";
        return 1;
    }
    else{
        c = result % 10;

        x = ((result - c) / 10) + c * 100;
        // Проверка
        cout << "Проверка:\n";
        cout << "1. Вычитаем последнюю цифру: " << result << " - " << c << " = " << (result - c) << endl;
        cout << "2. Делим на 10: " << (result - c) << " / 10 = " << (result - c) / 10 << endl;
        cout << "3. Приписываем слева " << c << ": получаем " << x << endl;
        cout << "Ответ: Наше число n: " << x << endl;
        return 0;
    }
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите двузначное число: ";
    cin >> n;

    int first = n / 10;
    int second = n % 10;

    // а) какая цифра больше
    if (first > second) {
        cout << "а) Первая цифра больше\n";
    }
    else if (second > first) {
        cout << "а) Вторая цифра больше\n";
    }
    else {
        cout << "а) Цифры равны\n";
    }

    // б) одинаковы ли цифры
    if (first == second) {
        cout << "б) Цифры одинаковы\n";
    }
    else {
        cout << "б) Цифры различны\n";
    }

    return 0;
}
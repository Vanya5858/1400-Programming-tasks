#include <iostream>
using namespace std;

// Функция для расчета НОД (алгоритм Евклида)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a, b; // числитель и знаменатель

    cout << "Введите числитель и знаменатель дроби:" << endl;
    cout << "Числитель (a) = ";
    cin >> a;
    cout << "Знаменатель (b) = ";
    cin >> b;

    if (b == 0) {
        cout << "Ошибка: знаменатель не может быть равен 0!" << endl;
        return 1;
    }

    int divisor = gcd(a, b);
    int p = a / divisor; // сокращенный числитель
    int q = b / divisor; // сокращенный знаменатель

    cout << "\nИсходная дробь: " << a << "/" << b << endl;
    cout << "НОД(" << a << ", " << b << ") = " << divisor << endl;
    cout << "Сокращенная дробь: " << p << "/" << q << endl;

    return 0;
}
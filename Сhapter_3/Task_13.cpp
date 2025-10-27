#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    // Ввод порядкового номера
    cout << "Введите порядковый номер n (1-50): ";
    cin >> n;

    // Вычисление номера строки (нумерация с 1)
    int row = (n - 1) / 5 + 1;

    // Вычисление номера столбца (нумерация с 1)
    int column = (n - 1) % 5 + 1;

    // Вывод результатов
    cout << "Значение с номером " << n << " находится:\n";
    cout << "1) В строке: " << row << endl;
    cout << "2) В столбце: " << column << endl;

    return 0;
}
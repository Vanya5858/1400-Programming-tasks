#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int count;
    char symbol;
    cout << "Введите количество символов: ";
    cin >> count;
    cout << "Введите символ: ";
    cin >> symbol;

    string result(count, symbol);
    cout << "Результат: " << result << "\n";

    return 0;
}
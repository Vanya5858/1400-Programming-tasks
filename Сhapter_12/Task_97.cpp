#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string str;
    int m, n;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Введите m и n (номера символов): ";
    cin >> m >> n;

    if (m >= 1 && n >= m && n <= (int)str.length()) {
        // Извлекаем подстроку (индексы с 0, поэтому m-1)
        string substring = str.substr(m - 1, n - m + 1);

        if (substring == "666") {
            cout << "Подстрока образует число 666\n";
        }
        else {
            cout << "Подстрока: '" << substring << "' не является 666\n";
        }
    }
    else {
        cout << "Неверные значения m и n\n";
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int m, n;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите m и n (номера позиций, начиная с 1): ";
    cin >> m >> n;

    if (m >= 1 && n >= m && n <= word.length()) {
        string part = word.substr(m - 1, n - m + 1);
        cout << "Часть слова с " << m << "-й по " << n << "-ю букву: " << part << endl;
    }
    else {
        cout << "Неверные номера позиций" << endl;
    }

    return 0;
}
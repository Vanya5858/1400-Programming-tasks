#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int m, n;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите m и n (номера букв): ";
    cin >> m >> n;

    if (m >= 1 && n >= 1 && m <= (int)word.length() && n <= (int)word.length()) {
        // Меняем местами m-ю (индекс m-1) и n-ю (индекс n-1) буквы
        swap(word[m - 1], word[n - 1]);
        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Неверные номера букв\n";
    }

    return 0;
}
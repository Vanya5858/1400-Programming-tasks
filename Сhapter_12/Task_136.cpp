#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int k;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите k: ";
    cin >> k;

    if (k >= 1 && k <= (int)word.length()) {
        char first = word[0];
        // Сдвигаем буквы со 2-й по k-ю влево
        for (int i = 0; i < k - 1; i++) {
            word[i] = word[i + 1];
        }
        word[k - 1] = first; // Первую букву на k-е место

        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Неверное значение k\n";
    }

    return 0;
}
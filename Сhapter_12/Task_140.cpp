#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (!word.empty()) {
        char last = word[word.length() - 1];
        // Сдвигаем буквы вправо
        for (int i = word.length() - 1; i > 0; i--) {
            word[i] = word[i - 1];
        }
        word[0] = last; // Последнюю букву в начало

        cout << "Результат: " << word << "\n";
    }

    return 0;
}
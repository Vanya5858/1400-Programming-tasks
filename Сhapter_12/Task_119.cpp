#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() % 2 != 0) {
        // Нечетная длина - удаляем среднюю букву
        int middle = word.length() / 2;
        for (size_t i = middle; i < word.length() - 1; i++) {
            word[i] = word[i + 1];
        }
        word[word.length() - 1] = '_';
    }
    else {
        // Четная длина - удаляем две средние буквы
        int middle = word.length() / 2 - 1;
        for (int i = 0; i < 2; i++) {
            for (size_t j = middle; j < word.length() - 1; j++) {
                word[j] = word[j + 1];
            }
            word[word.length() - 1 - i] = '_';
        }
    }

    cout << "Результат: " << word << "\n";

    return 0;
}
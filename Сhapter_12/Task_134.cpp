#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (!word.empty()) {
        char first = word[0];
        // Сдвигаем все буквы влево
        for (size_t i = 0; i < word.length() - 1; i++) {
            word[i] = word[i + 1];
        }
        word[word.length() - 1] = first; // Первую букву в конец

        cout << "Результат: " << word << "\n";
    }

    return 0;
}
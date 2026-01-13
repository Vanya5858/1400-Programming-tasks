#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int k;
    cout << "Введите слово: ";
    cin >> word;

    // a) Удаляем третью букву (индекс 2)
    if (word.length() >= 3) {
        for (size_t i = 2; i < word.length() - 1; i++) {
            word[i] = word[i + 1];
        }
        word[word.length() - 1] = '_';
        cout << "а) Без третьей буквы: " << word << "\n";
    }

    // б) Удаляем k-ю букву
    cout << "Введите k: ";
    cin >> k;

    if (k >= 1 && k <= (int)word.length()) {
        // Восстанавливаем оригинал
        string original;
        cout << "Введите слово снова: ";
        cin >> original;

        for (size_t i = k - 1; i < original.length() - 1; i++) {
            original[i] = original[i + 1];
        }
        original[original.length() - 1] = '_';
        cout << "б) Без " << k << "-й буквы: " << original << "\n";
    }

    return 0;
}
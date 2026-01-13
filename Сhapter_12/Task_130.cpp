#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    char letter;
    cout << "Введите слово (оканчивается '_'): ";
    getline(cin, word);
    cout << "Введите букву для вставки: ";
    cin >> letter;

    // Ищем первую букву 'u'
    int pos = -1;
    for (size_t i = 0; i < word.length(); i++) {
        if (word[i] == 'u' || word[i] == 'U') {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        // Сдвигаем символы вправо
        for (int i = word.length() - 2; i > pos; i--) {
            word[i + 1] = word[i];
        }
        word[pos + 1] = letter;

        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Буква 'u' не найдена\n";
    }

    return 0;
}
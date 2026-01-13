#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    int first_a = -1, last_o = -1;

    // Находим первую букву 'а'
    for (size_t i = 0; i < word.length(); i++) {
        if (word[i] == 'а' || word[i] == 'А') {
            first_a = i;
            break;
        }
    }

    // Находим последнюю букву 'о'
    for (int i = word.length() - 1; i >= 0; i--) {
        if (word[i] == 'о' || word[i] == 'О') {
            last_o = i;
            break;
        }
    }

    if (first_a != -1 && last_o != -1) {
        swap(word[first_a], word[last_o]);
        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Не найдены обе буквы 'а' и 'о'\n";
    }

    return 0;
}
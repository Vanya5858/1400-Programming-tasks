#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // а) порядковый номер первой буквы 'e'
    int first_e = -1;
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'e' || sentence[i] == 'е' ||
            sentence[i] == 'E' || sentence[i] == 'Е') {
            first_e = i + 1; // +1 для порядкового номера (не индекса)
            break;
        }
    }

    // б) порядковый номер последней буквы 'e'
    int last_e = -1;
    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (sentence[i] == 'e' || sentence[i] == 'е' ||
            sentence[i] == 'E' || sentence[i] == 'Е') {
            last_e = i + 1;
            break;
        }
    }

    if (first_e != -1) {
        cout << "а) Порядковый номер первой буквы 'e': " << first_e << "\n";
        cout << "б) Порядковый номер последней буквы 'e': " << last_e << "\n";
    }
    else {
        cout << "Буква 'e' не найдена\n";
    }

    return 0;
}
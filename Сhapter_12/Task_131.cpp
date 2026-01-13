#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    char letter;
    cout << "Введите предложение (оканчивается '_'): ";
    getline(cin, sentence);
    cout << "Введите букву для вставки: ";
    cin >> letter;

    // Ищем последнюю букву 'u'
    int pos = -1;
    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (sentence[i] == 'u' || sentence[i] == 'U') {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        // Вставляем ПЕРЕД последней буквой 'u' - сдвигаем все символы вправо начиная с pos
        for (int i = sentence.length() - 2; i >= pos; i--) {
            sentence[i + 1] = sentence[i];
        }
        sentence[pos] = letter; // Вставляем перед 'u'

        cout << "Результат: " << sentence << "\n";
    }
    else {
        cout << "Буква 'u' не найдена\n";
    }

    return 0;
}
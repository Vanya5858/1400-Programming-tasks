#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    int first_a = -1;
    bool has_a = false;

    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'а' || sentence[i] == 'А') {
            has_a = true;
            first_a = i + 1; // +1 для порядкового номера
            break;
        }
    }

    if (has_a) {
        cout << "Буква 'а' есть в предложении\n";
        cout << "Порядковый номер первой буквы 'а': " << first_a << "\n";
    }
    else {
        cout << "Буквы 'а' нет в предложении\n";
    }

    return 0;
}
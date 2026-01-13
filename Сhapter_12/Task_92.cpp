#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    cout << "Введите последовательность слов: ";
    getline(cin, text);

    bool correct = true;

    // Проверяем правильность написания "жи" и "щи"
    for (size_t i = 0; i < text.length() - 1; i++) {
        if ((text[i] == 'ж' || text[i] == 'Ж') &&
            (text[i + 1] == 'ы' || text[i + 1] == 'Ы')) {
            correct = false;
            cout << "Ошибка: 'жы' на позиции " << i + 1 << "\n";
        }
        if ((text[i] == 'щ' || text[i] == 'Щ') &&
            (text[i + 1] == 'ы' || text[i + 1] == 'Ы')) {
            correct = false;
            cout << "Ошибка: 'щы' на позиции " << i + 1 << "\n";
        }
    }

    if (correct) {
        cout << "Буквосочетания 'жи' и 'щи' записаны правильно\n";
    }

    return 0;
}
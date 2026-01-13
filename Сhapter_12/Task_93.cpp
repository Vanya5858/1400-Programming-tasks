#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    cout << "Введите последовательность слов: ";
    getline(cin, text);

    string corrected = text;

    // Проверяем и исправляем "ча" и "ща"
    for (size_t i = 0; i < corrected.length() - 1; i++) {
        if ((corrected[i] == 'ч' || corrected[i] == 'Ч') &&
            (corrected[i + 1] == 'я' || corrected[i + 1] == 'Я')) {
            // Заменяем "чя" на "ча"
            corrected[i + 1] = 'а';
        }
        if ((corrected[i] == 'щ' || corrected[i] == 'Щ') &&
            (corrected[i + 1] == 'я' || corrected[i + 1] == 'Я')) {
            // Заменяем "щя" на "ща"
            corrected[i + 1] = 'а';
        }
    }

    if (corrected != text) {
        cout << "Исходный текст: " << text << "\n";
        cout << "Исправленный текст: " << corrected << "\n";
    }
    else {
        cout << "Буквосочетания 'ча' и 'ща' записаны правильно\n";
    }

    return 0;
}
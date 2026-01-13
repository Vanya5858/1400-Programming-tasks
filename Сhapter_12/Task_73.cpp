#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    bool found = false;
    cout << "Введите текст: ";
    getline(cin, text);

    for (size_t i = 0; i <= text.length() - 5; i++) {
        bool same = true;
        for (int j = 0; j < 5; j++) {
            if (text[i] != text[i + j]) {
                same = false;
                break;
            }
        }
        if (same) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Да, есть 5 идущих подряд одинаковых символов\n";
    }
    else {
        cout << "Нет таких символов\n";
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    bool found_chu = false, found_iu = false;
    int pos_chu = -1, pos_iu = -1;

    // Ищем "чу" или "чу"
    for (size_t i = 0; i < sentence.length() - 1; i++) {
        if ((sentence[i] == 'ч' || sentence[i] == 'Ч') &&
            (sentence[i + 1] == 'у' || sentence[i + 1] == 'У')) {
            found_chu = true;
            pos_chu = i + 1; // +1 для порядкового номера
            break;
        }
        if ((sentence[i] == 'и' || sentence[i] == 'И') &&
            (sentence[i + 1] == 'у' || sentence[i + 1] == 'У')) {
            found_iu = true;
            pos_iu = i + 1;
            break;
        }
    }

    if (found_chu || found_iu) {
        if (found_chu) {
            cout << "Найдено буквосочетание 'чу'\n";
            cout << "Порядковый номер первой буквы: " << pos_chu << "\n";
        }
        if (found_iu) {
            cout << "Найдено буквосочетание 'иу'\n";
            cout << "Порядковый номер первой буквы: " << pos_iu << "\n";
        }
    }
    else {
        cout << "Буквосочетаний 'чу' и 'иу' не найдено\n";
    }

    return 0;
}
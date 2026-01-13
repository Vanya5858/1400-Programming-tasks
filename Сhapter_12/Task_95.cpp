#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    int pos_i = -1, pos_k = -1;

    // Находим первые вхождения букв 'и' и 'к'
    for (size_t i = 0; i < sentence.length(); i++) {
        if ((sentence[i] == 'и' || sentence[i] == 'И') && pos_i == -1) {
            pos_i = i;
        }
        if ((sentence[i] == 'к' || sentence[i] == 'К') && pos_k == -1) {
            pos_k = i;
        }

        if (pos_i != -1 && pos_k != -1) break;
    }

    if (pos_i != -1 && pos_k != -1) {
        if (pos_i < pos_k) {
            cout << "Буква 'и' встречается раньше (позиция " << pos_i + 1 << ")\n";
        }
        else if (pos_k < pos_i) {
            cout << "Буква 'к' встречается раньше (позиция " << pos_k + 1 << ")\n";
        }
        else {
            cout << "Буквы на одной позиции\n";
        }
    }
    else {
        cout << "Не все буквы найдены в предложении\n";
    }

    return 0;
}
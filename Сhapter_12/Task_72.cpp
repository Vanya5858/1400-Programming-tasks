#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    int last_c = -1, last_m = -1;

    // Находим последние вхождения
    for (int i = sentence.length() - 1; i >= 0; i--) {
        if ((sentence[i] == 'с' || sentence[i] == 'С') && last_c == -1) {
            last_c = i;
        }
        if ((sentence[i] == 'м' || sentence[i] == 'М') && last_m == -1) {
            last_m = i;
        }
    }

    if (last_c > last_m) {
        cout << "Буква 'с' встречается позже\n";
    }
    else if (last_m > last_c) {
        cout << "Буква 'м' встречается позже\n";
    }
    else {
        cout << "Буквы не найдены или на одной позиции\n";
    }

    return 0;
}
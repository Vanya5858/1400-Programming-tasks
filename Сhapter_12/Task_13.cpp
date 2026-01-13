#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int k;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите номер символа k: ";
    cin >> k;

    if (k >= 1 && k <= word.length()) {
        cout << k << "-й символ: " << word[k - 1] << endl;
    }
    else {
        cout << "Неверный номер символа" << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string str;
    cout << "Введите строку: ";
    getline(cin, str);

    int removed = 0;
    for (size_t i = 0; i < str.length() - removed; i++) {
        if (str[i] == ' ') {
            for (size_t j = i; j < str.length() - 1 - removed; j++) {
                str[j] = str[j + 1];
            }
            removed++;
            i--;
        }
    }

    for (size_t i = str.length() - removed; i < str.length(); i++) {
        str[i] = '_';
    }

    cout << "Результат: " << str << "\n";

    return 0;
}
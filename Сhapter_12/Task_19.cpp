#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() >= 4) {
        string part = word.substr(1, 3); // с индекса 1, длина 3
        cout << "Часть слова (2-4 буквы): " << part << endl;
    }
    else {
        cout << "Слово слишком короткое" << endl;
    }

    return 0;
}
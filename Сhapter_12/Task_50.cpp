#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    char symbol;
    cout << "Введите предложение: ";
    getline(cin, sentence);
    cout << "Введите символ для поиска: ";
    cin >> symbol;

    cout << "Вхождения символа '" << symbol << "' столбиком:\n";
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == symbol) {
            cout << symbol << "\n";
        }
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    char ch1, ch2;
    cout << "Введите предложение: ";
    getline(cin, sentence);
    cout << "Введите первый символ: ";
    cin >> ch1;
    cout << "Введите второй символ: ";
    cin >> ch2;

    cout << "Вхождения символов '" << ch1 << "' и '" << ch2 << "':\n";
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ch1 || sentence[i] == ch2) {
            cout << sentence[i] << "\n";
        }
    }

    return 0;
}
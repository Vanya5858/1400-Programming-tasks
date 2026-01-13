#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() >= 4) {
        string combination;
        combination += word[1];
        combination += word[3];
        cout << "Буквосочетание из второго и четвертого символов: " << combination << endl;
    }
    else {
        cout << "Слово слишком короткое" << endl;
    }

    return 0;
}
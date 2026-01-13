#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() >= 3) {
        string combination;
        combination += word[2];
        combination += word.back();
        cout << "Буквосочетание из третьего и последнего символов: " << combination << endl;
    }
    else {
        cout << "Слово слишком короткое" << endl;
    }

    return 0;
}
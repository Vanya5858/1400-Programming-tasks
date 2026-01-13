#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() >= 4) {
        if (word[1] == word[3]) {
            cout << "Второй и четвертый символы одинаковы: " << word[1] << endl;
        }
        else {
            cout << "Второй и четвертый символы различны" << endl;
        }
    }
    else {
        cout << "Слово слишком короткое" << endl;
    }

    return 0;
}
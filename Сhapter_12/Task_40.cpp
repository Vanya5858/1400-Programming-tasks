#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    cout << "Слово, начиная с последней буквы: ";
    for (int i = word.length() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << "\n";

    return 0;
}
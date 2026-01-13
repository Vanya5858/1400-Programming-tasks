#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (!word.empty()) {
        if (word.front() == word.back()) {
            cout << "Слово начинается и заканчивается на одну букву: " << word.front() << endl;
        }
        else {
            cout << "Слово начинается и заканчивается на разные буквы" << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word1, word2;
    cout << "Введите первое слово: ";
    cin >> word1;
    cout << "Введите второе слово: ";
    cin >> word2;

    if (!word1.empty() && !word2.empty()) {
        if (word1.front() == word2.back()) {
            cout << "Да, первое слово начинается на ту же букву, на которую заканчивается второе: " << word1.front() << endl;
        }
        else {
            cout << "Нет" << endl;
        }
    }

    return 0;
}
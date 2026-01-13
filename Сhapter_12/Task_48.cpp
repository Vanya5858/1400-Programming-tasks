#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word1, word2;
    cout << "Введите первое слово (длиннее): ";
    cin >> word1;
    cout << "Введите второе слово: ";
    cin >> word2;

    if (word1.length() > word2.length()) {
        // Заменяем первые символы второго слова на первое слово
        word2 = word1;
        cout << "Результат: " << word2 << "\n";
    }
    else {
        cout << "Первое слово должно быть длиннее второго\n";
    }

    return 0;
}
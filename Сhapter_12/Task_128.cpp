#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");


    string word;
    int k;

    cout << "Введите слово (оканчивается '_'): ";
    getline(cin, word);

    // Проверяем, что слово действительно оканчивается '_'
    if (word.empty() || word.back() != '_') {
        cout << "Слово должно оканчиваться символом '_'" << endl;
        return 0;
    }

    cout << "Введите k (номер буквы после которой вставить 'm'): ";
    cin >> k;

    if (k < 0 || k >= (int)word.length() - 1) { 
        cout << "Неверный номер буквы" << endl;
        return 0;
    }


    for (int i = word.length() - 2; i >= k; i--) {
        word[i + 1] = word[i];
    }

    word[k + 1] = 'm';

    cout << "Результат: " << word << endl;

    return 0;
}
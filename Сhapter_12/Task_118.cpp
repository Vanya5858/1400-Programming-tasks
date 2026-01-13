#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    string word_a = word; 
    string word_b = word; 

    // а) Удаляем первую букву 'о'
    for (size_t i = 0; i < word_a.length(); i++) {
        if (word_a[i] == 'o' || word_a[i] == 'O') {
            for (size_t j = i; j < word_a.length() - 1; j++) {
                word_a[j] = word_a[j + 1];
            }
            word_a[word_a.length() - 1] = '_';
            break;
        }
    }

    // б) Удаляем последнюю букву 'л'
    for (int i = word_b.length() - 1; i >= 0; i--) {
        if (word_b[i] == 'l' || word_b[i] == 'L') {
            for (size_t j = i; j < word_b.length() - 1; j++) {
                word_b[j] = word_b[j + 1];
            }
            word_b[word_b.length() - 1] = '_';
            break;
        }
    }

    cout << "а) Без первой 'o': " << word_a << "\n";
    cout << "б) Без последней 'l': " << word_b << "\n";

    return 0;
}
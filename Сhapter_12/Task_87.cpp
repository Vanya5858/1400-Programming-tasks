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

    // Случай 2: слова могут быть одинаковыми
    int match_count = 0;
    int min_len = min(word1.length(), word2.length());

    for (int i = 0; i < min_len; i++) {
        if (word1[i] == word2[i]) {
            match_count++;
        }
        else {
            break;
        }
    }

    cout << "Совпадает начальных букв: " << match_count << "\n";

    return 0;
}
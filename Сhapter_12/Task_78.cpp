#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение (слова через один пробел): ";
    getline(cin, sentence);

    // Находим два последних слова
    int space_count = 0;
    size_t last_space = string::npos;
    size_t prev_space = string::npos;

    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            space_count++;
            if (space_count == 1) {
                last_space = i;
            }
            else if (space_count == 2) {
                prev_space = i;
                break;
            }
        }
    }

    string last_word, prev_word;
    if (last_space != string::npos) {
        last_word = sentence.substr(last_space + 1);
        if (prev_space != string::npos) {
            prev_word = sentence.substr(prev_space + 1, last_space - prev_space - 1);
        }
        else {
            prev_word = sentence.substr(0, last_space);
        }
    }

    cout << "Предпоследнее слово: " << prev_word << "\n";
    cout << "Последнее слово: " << last_word << "\n";

    return 0;
}
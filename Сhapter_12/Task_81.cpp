#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    string longest_word, current_word;
    int max_length = 0;

    for (size_t i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            if (current_word.length() > max_length) {
                max_length = current_word.length();
                longest_word = current_word;
            }
            current_word.clear();
        }
        else {
            current_word += sentence[i];
        }
    }

    cout << "Самое длинное слово: " << longest_word << "\n";
    cout << "Его длина: " << max_length << "\n";

    return 0;
}
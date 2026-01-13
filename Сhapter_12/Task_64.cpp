#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int word_count = 1;
    cout << "Введите предложение (слова через один пробел): ";
    getline(cin, sentence);

    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            word_count++;
        }
    }

    cout << "Количество слов: " << word_count << "\n";

    return 0;
}
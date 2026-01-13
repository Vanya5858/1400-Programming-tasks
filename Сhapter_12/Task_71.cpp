#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int word_count = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    bool in_word = false;
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            if (!in_word) {
                word_count++;
                in_word = true;
            }
        }
        else {
            in_word = false;
        }
    }

    if (word_count > 3) {
        cout << "Да, число слов больше трех\n";
    }
    else {
        cout << "Нет, число слов не больше трех\n";
    }

    return 0;
}
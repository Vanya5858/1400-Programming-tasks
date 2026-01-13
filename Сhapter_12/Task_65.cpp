#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    int word_count = 0;
    bool in_word = false;

    // Случай 2: с начальными/конечными пробелами
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

    cout << "Количество слов: " << word_count << "\n";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение (не менее 7 слов): ";
    getline(cin, sentence);

    cout << "Первые 6 слов:\n";
    int word_count = 0;
    string word;

    for (size_t i = 0; i <= sentence.length(); i++) {
        if (i == sentence.length() || sentence[i] == ' ') {
            if (!word.empty()) {
                cout << word << "\n";
                word_count++;
                word.clear();
                if (word_count >= 6) break;
            }
        }
        else {
            word += sentence[i];
        }
    }

    return 0;
}
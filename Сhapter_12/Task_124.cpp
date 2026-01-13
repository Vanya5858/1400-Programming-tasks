#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    int removed = 0;
    for (size_t i = 0; i < sentence.length() - removed; i++) {
     
        if (i % 2 == 0 && (sentence[i] == 'o' || sentence[i] == 'O')) {
            for (size_t j = i; j < sentence.length() - 1 - removed; j++) {
                sentence[j] = sentence[j + 1];
            }
            removed++;
            i--;
        }
    }

    for (size_t i = sentence.length() - removed; i < sentence.length(); i++) {
        sentence[i] = '_';
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
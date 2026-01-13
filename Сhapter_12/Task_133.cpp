#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "рпроцессо";

    // Переносим первую букву 'р' в конец
    char first = word[0];
    for (size_t i = 0; i < word.length() - 1; i++) {
        word[i] = word[i + 1];
    }
    word[word.length() - 1] = first;

    cout << "Исправленное слово: " << word << "\n";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "роцессор";

    // Добавляем 'п' в начало слова
    for (int i = word.length() - 2; i >= 0; i--) {
        word[i + 1] = word[i];
    }
    word[0] = 'п';

    cout << "Исправленное слово: " << word << "\n";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "стекляный";


    for (int i = word.length() - 1; i > 5; i--) {
        word[i] = word[i - 1];
    }
    word[6] = 'н'; // Правильно: стеклянный

    cout << "Исправленное слово: " << word << "\n";

    return 0;
}
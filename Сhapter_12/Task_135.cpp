#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "шнформаця";


    word[0] = 'и';
    for (int i = word.length() - 2; i > 7; i--) {
        word[i + 1] = word[i];
    }
    word[8] = 'и';

    cout << "Исправленное слово: " << word << "\n";

    return 0;
}
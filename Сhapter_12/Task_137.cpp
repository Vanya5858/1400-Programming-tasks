#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "аллоритм";


    for (size_t i = 0; i < word.length(); i++) {
        if (word[i] == 'г') {
            // Сдвигаем символы между позициями
            char temp = word[i];
            for (size_t j = i; j > 2; j--) {
                word[j] = word[j - 1];
            }
            word[2] = temp;
            break;
        }
    }

    cout << "Исправленное слово: " << word << "\n";

    return 0;
}
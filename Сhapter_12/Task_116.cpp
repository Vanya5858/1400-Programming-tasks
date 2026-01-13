#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово с ошибкой: ";
    cin >> word;

    // a) Исправляем "глиняный"
    if (word.find("глиняный") != string::npos) {
        // Удаляем лишнюю 'н' (символ '_' в конце)
        for (size_t i = 0; i < word.length() - 1; i++) {
            if (word[i] == 'н' && word[i + 1] == 'н') {
                // Сдвигаем все символы влево
                for (size_t j = i; j < word.length() - 1; j++) {
                    word[j] = word[j + 1];
                }
                word[word.length() - 1] = '_';
                break;
            }
        }
    }
    // б) Исправляем "граффика"
    else if (word.find("граффика") != string::npos) {
        // Удаляем лишнюю 'ф'
        for (size_t i = 0; i < word.length() - 1; i++) {
            if (word[i] == 'ф' && word[i + 1] == 'ф') {
                for (size_t j = i; j < word.length() - 1; j++) {
                    word[j] = word[j + 1];
                }
                word[word.length() - 1] = '_';
                break;
            }
        }
    }

    cout << "Исправленное слово: " << word << "\n";

    return 0;
}
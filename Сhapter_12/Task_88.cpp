#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Пропускаем начальные пробелы
    size_t start = 0;
    while (start < sentence.length() && sentence[start] == ' ') {
        start++;
    }

    int count_o = 0;
    // Считаем буквы 'o' в первом слове
    for (size_t i = start; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            break; // Конец первого слова
        }
        if (sentence[i] == 'о' || sentence[i] == 'О') {
            count_o++;
        }
    }

    cout << "Количество букв 'o' в первом слове: " << count_o << "\n";

    return 0;
}
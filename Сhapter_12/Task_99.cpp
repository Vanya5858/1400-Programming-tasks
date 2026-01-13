#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Заменяем все пробелы на '_'
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            sentence[i] = '_';
        }
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
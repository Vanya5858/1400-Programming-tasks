#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение (слова через два пробела): ";
    getline(cin, sentence);

    // Находим первое слово (до первых двух пробелов)
    size_t space_pos = sentence.find("  ");
    if (space_pos != string::npos) {
        string first_word = sentence.substr(0, space_pos);
        cout << "Первое слово: " << first_word << "\n";
    }
    else {
        cout << "Слово не найдено\n";
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение (слова через один пробел): ";
    getline(cin, sentence);

    // Находим последнее слово
    size_t last_space = sentence.find_last_of(' ');
    if (last_space != string::npos) {
        string last_word = sentence.substr(last_space + 1);
        cout << "Последнее слово: " << last_word << "\n";
    }
    else {
        cout << sentence << "\n";  // если только одно слово
    }

    return 0;
}
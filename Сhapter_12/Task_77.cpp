#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение (слова через два пробела): ";
    getline(cin, sentence);

    // Разделяем слова
    size_t pos1 = 0, pos2 = sentence.find("  ");
    string word1 = sentence.substr(pos1, pos2 - pos1);

    size_t pos3 = pos2 + 2;
    pos2 = sentence.find("  ", pos3);
    string word2 = sentence.substr(pos3, pos2 - pos3);

    size_t pos4 = pos2 + 2;
    pos2 = sentence.find("  ", pos4);
    string word3 = sentence.substr(pos4, pos2 - pos4);

    cout << "Первое слово: " << word1 << "\n";
    cout << "Второе слово: " << word2 << "\n";
    cout << "Третье слово: " << word3 << "\n";

    return 0;
}
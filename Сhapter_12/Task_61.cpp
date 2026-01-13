#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    int count_plus = 0, count_star = 0;
    cout << "Введите текст: ";
    getline(cin, text);

    for (size_t i = 0; i < text.length(); i++) {
        if (text[i] == '+') count_plus++;
        else if (text[i] == '*') count_star++;
    }

    cout << "Символов '+': " << count_plus << "\n";
    cout << "Символов '*': " << count_star << "\n";

    return 0;
}
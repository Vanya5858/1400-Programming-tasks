#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    int sentences = 0;
    cout << "Введите текст: ";
    getline(cin, text);

    for (size_t i = 0; i < text.length(); i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }

    cout << "Число предложений: " << sentences << "\n";

    return 0;
}
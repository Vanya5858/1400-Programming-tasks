#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "апельсин";
    // "спаниель" получается перестановкой букв
    string spaniel = word.substr(4, 1) + word.substr(2, 1) + word.substr(0, 1) +
        word.substr(5, 1) + word.substr(1, 1) + word.substr(3, 1) +
        word.substr(6, 1) + word.substr(7, 1);

    cout << "Исходное слово: " << word << endl;
    cout << "Получено 'спаниель': " << spaniel << endl;

    return 0;
}
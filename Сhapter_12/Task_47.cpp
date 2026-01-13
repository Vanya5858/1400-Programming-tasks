#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    string stars(word.length(), '*');
    string result = stars + word + stars;
    cout << "Результат: " << result << "\n";

    return 0;
}
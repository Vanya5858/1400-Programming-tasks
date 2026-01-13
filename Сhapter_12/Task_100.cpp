#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    for (size_t i = 1; i < sentence.length(); i += 2) {
        sentence[i] = 'ы';
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    char symbol;
    int count = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);
    cout << "Введите символ для поиска: ";
    cin >> symbol;

    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == symbol) {
            count++;
        }
    }

    cout << "Число вхождений символа '" << symbol << "': " << count << "\n";

    return 0;
}
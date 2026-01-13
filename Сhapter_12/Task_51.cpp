#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    cout << "Каждый третий символ столбиком:\n";
    for (size_t i = 2; i < sentence.length(); i += 3) {
        cout << sentence[i] << "\n";
    }

    return 0;
}
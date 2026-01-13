#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    cout << "Буквосочетания 'нн':\n";
    for (size_t i = 0; i < sentence.length() - 1; i++) {
        if (sentence[i] == 'н' && sentence[i + 1] == 'н') {
            cout << "нн (позиции " << i + 1 << "-" << i + 2 << ")\n";
        }
    }

    return 0;
}
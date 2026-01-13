#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    cout << "Буквы 'у' на четных местах:\n";
    for (size_t i = 1; i < sentence.length(); i += 2) {
        if (sentence[i] == 'у' || sentence[i] == 'У') {
            cout << sentence[i] << "\n";
        }
    }

    return 0;
}
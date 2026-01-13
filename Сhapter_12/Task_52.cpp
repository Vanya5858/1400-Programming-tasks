#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    cout << "Буквы 'м' и 'н' в предложении: ";
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'м' || sentence[i] == 'М' ||
            sentence[i] == 'н' || sentence[i] == 'Н') {
            cout << sentence[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}
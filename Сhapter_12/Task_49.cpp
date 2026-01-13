#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    cin.ignore();
    getline(cin, sentence);

    cout << "Буквы 'у' в предложении: ";
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'у' || sentence[i] == 'У') {
            cout << sentence[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}
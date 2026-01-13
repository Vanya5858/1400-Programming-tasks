#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int count = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'о' || sentence[i] == 'О') {
            count++;
        }
    }

    cout << "Число букв 'о': " << count << "\n";

    return 0;
}
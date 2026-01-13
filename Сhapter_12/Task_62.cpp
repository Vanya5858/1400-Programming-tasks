#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int count = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    for (size_t i = 0; i < sentence.length() - 1; i++) {
        if (sentence[i] == sentence[i + 1]) {
            count++;
        }
    }

    cout << "Одинаковых соседних букв: " << count << "\n";

    return 0;
}
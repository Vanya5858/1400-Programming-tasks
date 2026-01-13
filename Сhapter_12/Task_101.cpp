#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    for (size_t i = 2; i < sentence.length(); i += 3) {
        sentence[i] = 'а';
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
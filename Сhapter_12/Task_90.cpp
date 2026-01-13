#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    bool found = false;
    int pos = -1;

    for (size_t i = 0; i < sentence.length() - 1; i++) {
        if (sentence[i] == sentence[i + 1]) {
            found = true;
            pos = i + 1; // Номер первого символа пары (начиная с 1)
            break;
        }
    }

    if (found) {
        cout << "Первая пара одинаковых соседних символов на позициях: "
            << pos << " и " << pos + 1 << "\n";
    }
    else {
        cout << "Одинаковых соседних символов нет\n";
    }

    return 0;
}
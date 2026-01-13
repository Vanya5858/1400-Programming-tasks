#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Случай 2: запятых может не быть
    size_t comma_pos = sentence.find(',');

    if (comma_pos != string::npos) {
        cout << "Символы до первой запятой: ";
        for (size_t i = 0; i < comma_pos; i++) {
            cout << sentence[i];
        }
        cout << "\n";
    }
    else {
        cout << "В предложении нет запятых\n";
    }

    return 0;
}
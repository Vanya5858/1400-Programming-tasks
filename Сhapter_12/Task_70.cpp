#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    bool has_comma = false;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ',') {
            has_comma = true;
            break;
        }
    }

    if (has_comma) {
        cout << "В предложении есть запятые\n";
    }
    else {
        cout << "В предложении нет запятых\n";
    }

    return 0;
}
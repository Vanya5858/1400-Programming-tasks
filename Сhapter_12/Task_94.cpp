#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Находим первую запятую
    size_t first_comma = sentence.find(',');

    if (first_comma != string::npos) {
        // Находим вторую запятую
        size_t second_comma = sentence.find(',', first_comma + 1);

        if (second_comma != string::npos) {
            // Выводим символы между первой и второй запятой
            cout << "Символы между первой и второй запятой: ";
            for (size_t i = first_comma + 1; i < second_comma; i++) {
                cout << sentence[i];
            }
            cout << "\n";
        }
        else {
            // Выводим символы после единственной запятой
            cout << "Символы после запятой: ";
            for (size_t i = first_comma + 1; i < sentence.length(); i++) {
                cout << sentence[i];
            }
            cout << "\n";
        }
    }
    else {
        cout << "В предложении нет запятых\n";
    }

    return 0;
}
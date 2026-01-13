#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "пробел";
    string result = word;

    // Заменяем 'б' на 'д' чтобы получить "продел"
    for (size_t i = 0; i < result.length(); i++) {
        if (result[i] == 'б') {
            result[i] = 'д';
        }
    }

    cout << "Исходное слово: " << word << endl;
    cout << "После замены букв: " << result << endl;

    return 0;
}
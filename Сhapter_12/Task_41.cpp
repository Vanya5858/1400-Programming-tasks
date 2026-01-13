#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string s1, s2 = "";
    cout << "Введите слово s1: ";
    cin >> s1;

    for (size_t i = 0; i < s1.length(); i++) {
        if ((i + 1) % 2 != 0) {  // нечетные позиции (индексы 0, 2, 4...)
            s2 += s1[i];
        }
    }

    cout << "Слово s2 из нечетных букв: " << s2 << "\n";

    return 0;
}
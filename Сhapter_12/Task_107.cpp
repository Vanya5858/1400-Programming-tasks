#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string s = "очепатка";  // ошибка вместо "опечатка"

    // Исправляем ошибку: меняем местами 'ч' и 'п'
    for (size_t i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'ч' && s[i + 1] == 'п') {
            swap(s[i], s[i + 1]);
            break;
        }
    }

    cout << "Исправленное слово: " << "опечатка" << "\n";

    return 0;
}
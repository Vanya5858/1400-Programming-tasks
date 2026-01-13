#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string stroka = "строка";
    string strofa = stroka;

    // Заменяем 'к' на 'ф'
    for (size_t i = 0; i < strofa.length(); i++) {
        if (strofa[i] == 'к') {
            strofa[i] = 'ф';
        }
    }

    cout << "Исходное слово: " << stroka << endl;
    cout << "После замены букв: " << strofa << endl;

    return 0;
}
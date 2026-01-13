#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    int count = 0;

    // Ищем слово "или" (с учетом границ слов)
    for (size_t i = 0; i <= text.length() - 3; i++) {
        if ((i == 0 || text[i - 1] == ' ') &&  // Начало слова
            text.substr(i, 3) == "или" &&     // Само слово
            (i + 3 == text.length() || text[i + 3] == ' ')) { // Конец слова
            count++;
        }
    }

    cout << "Слово 'или' встречается " << count << " раз\n";

    return 0;
}
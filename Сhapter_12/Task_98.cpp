#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Заменяем все буквы 'e' на 'u'
    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'e' || sentence[i] == 'е' ||
            sentence[i] == 'E' || sentence[i] == 'Е') {
            sentence[i] = 'у'; // русская 'у'
        }
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
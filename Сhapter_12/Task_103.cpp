#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Заменяем "да" на "не"
    size_t pos = sentence.find("да");
    while (pos != string::npos) {
        sentence.replace(pos, 2, "не");
        pos = sentence.find("да", pos + 2);
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
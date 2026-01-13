#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Заменяем "ах" на "ух"
    size_t pos = sentence.find("ах");
    while (pos != string::npos) {
        sentence.replace(pos, 2, "ух");
        pos = sentence.find("ах", pos + 2);
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
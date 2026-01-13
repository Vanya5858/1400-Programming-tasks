#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Заменяем "бит" на "роз"
    size_t pos = sentence.find("bit");
    while (pos != string::npos) {
        sentence.replace(pos, 3, "roz");
        pos = sentence.find("bit", pos + 3);
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
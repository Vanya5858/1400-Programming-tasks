#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Заменяем "про" на "нет"
    size_t pos = sentence.find("pro");
    while (pos != string::npos) {
        sentence.replace(pos, 3, "no");
        pos = sentence.find("pro", pos + 3);
    }

    cout << "Результат: " << sentence << "\n";

    return 0;
}
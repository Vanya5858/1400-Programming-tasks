#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово из четного числа букв: ";
    cin >> word;

    if (word.length() % 2 == 0) {
        // Способ 1: без цикла
        string result1 = word.substr(word.length() / 2) + word.substr(0, word.length() / 2);
        cout << "Способ 1 (без цикла): " << result1 << endl;

        // Способ 2: с циклом
        string result2;
        for (size_t i = word.length() / 2; i < word.length(); i++) {
            result2 += word[i];
        }
        for (size_t i = 0; i < word.length() / 2; i++) {
            result2 += word[i];
        }
        cout << "Способ 2 (с циклом): " << result2 << endl;
    }
    else {
        cout << "Слово содержит нечетное количество букв\n";
    }

    return 0;
}
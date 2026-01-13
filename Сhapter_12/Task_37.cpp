#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() >= 6) {
        // Способ 1: без цикла
        string first3 = word.substr(0, 3);
        string middle = word.substr(3, word.length() - 6);
        string last3 = word.substr(word.length() - 3);

        string result1 = last3 + middle + first3;
        cout << "Способ 1 (без цикла): " << result1 << endl;

        // Способ 2: с циклом
        string result2;
        for (int i = word.length() - 3; i < (int)word.length(); i++) {
            result2 += word[i];
        }
        for (size_t i = 3; i < word.length() - 3; i++) {
            result2 += word[i];
        }
        for (int i = 0; i < 3; i++) {
            result2 += word[i];
        }
        cout << "Способ 2 (с циклом): " << result2 << endl;
    }
    else {
        cout << "Слово слишком короткое\n";
    }

    return 0;
}
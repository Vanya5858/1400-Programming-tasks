#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int k;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите k: ";
    cin >> k;

    if (k > 0 && k <= (int)word.length()) {
        // Способ 1: без цикла
        string part1 = word.substr(0, k);
        string part2 = word.substr(k);
        string result1 = part2 + part1;
        cout << "Способ 1 (без цикла): " << result1 << endl;

        // Способ 2: с циклом
        string result2;
        for (size_t i = k; i < word.length(); i++) {
            result2 += word[i];
        }
        for (int i = 0; i < k; i++) {
            result2 += word[i];
        }
        cout << "Способ 2 (с циклом): " << result2 << endl;
    }
    else {
        cout << "Неверное значение k\n";
    }

    return 0;
}
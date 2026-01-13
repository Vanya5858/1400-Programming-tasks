#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    string result;
    set<char> seen;

    for (size_t i = 0; i < word.length(); i++) {
        if (seen.find(word[i]) == seen.end()) {
            result += word[i];
            seen.insert(word[i]);
        }
    }

    // Дополняем '_' до исходной длины
    while (result.length() < word.length()) {
        result += '_';
    }

    cout << "Результат: " << result << "\n";

    return 0;
}
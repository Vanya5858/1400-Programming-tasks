#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    bool is_palindrome = true;
    int n = word.length();

    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        cout << "Слово '" << word << "' является палиндромом\n";
    }
    else {
        cout << "Слово '" << word << "' не является палиндромом\n";
    }

    return 0;
}
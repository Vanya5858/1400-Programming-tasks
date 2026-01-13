#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    // Удаляем все пробелы
    string clean_text;
    for (size_t i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            clean_text += text[i];
        }
    }

    // Проверяем на палиндром
    bool is_palindrome = true;
    int n = clean_text.length();
    for (int i = 0; i < n / 2; i++) {
        if (clean_text[i] != clean_text[n - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    cout << "Текст без пробелов: " << clean_text << "\n";
    if (is_palindrome) {
        cout << "Является палиндромом\n";
    }
    else {
        cout << "Не является палиндромом\n";
    }

    return 0;
}
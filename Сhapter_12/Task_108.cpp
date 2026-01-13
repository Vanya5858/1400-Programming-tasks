#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() >= 5) {
        // Меняем местами вторую (индекс 1) и пятую (индекс 4) буквы
        swap(word[1], word[4]);
        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Слово слишком короткое\n";
    }

    return 0;
}
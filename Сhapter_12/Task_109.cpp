#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово: ";
    cin >> word;

    if (word.length() >= 3) {
        // Меняем местами третью (индекс 2) и последнюю буквы
        swap(word[2], word[word.length() - 1]);
        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Слово слишком короткое\n";
    }

    return 0;
}
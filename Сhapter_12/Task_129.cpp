#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");


    string word;
    char letter;
    int position;
    cout << "Введите слово (оканчивается '_'): ";
    getline(cin, word);
    cout << "Введите букву для вставки: ";
    cin >> letter;
    cout << "Введите номер буквы после которой вставить: ";
    cin >> position;

    if (position >= 1 && position < (int)word.length()) {
       
        for (int i = word.length() - 2; i >= position; i--) {
            word[i + 1] = word[i];
        }
        word[position] = letter; 

        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Неверный номер буквы\n";
    }

    return 0;
}
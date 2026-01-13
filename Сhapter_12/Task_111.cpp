#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово из четного числа букв: ";
    cin >> word;

    if (word.length() % 2 == 0) {
        for (size_t i = 0; i < word.length(); i += 2) {
            swap(word[i], word[i + 1]);
        }
        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Слово должно содержать четное число букв\n";
    }

    return 0;
}
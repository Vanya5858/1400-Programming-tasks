#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово из четного числа букв: ";
    cin >> word;

    if (word.length() % 2 == 0) {
        int half = word.length() / 2;
        for (int i = 0; i < half; i++) {
            swap(word[i], word[word.length() - 1 - i]);
        }
        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Слово должно содержать четное число букв\n";
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово из четного числа букв: ";
    cin >> word;

    if (word.length() % 2 == 0) {
        string firstHalf = word.substr(0, word.length() / 2);
        cout << "Первая половина слова: " << firstHalf << endl;
    }
    else {
        cout << "Слово содержит нечетное количество букв" << endl;
    }

    return 0;
}
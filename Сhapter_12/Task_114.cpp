#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int k, s;
    cout << "Введите слово из 15 букв: ";
    cin >> word;
    cout << "Введите k и s (k < s): ";
    cin >> k >> s;

    if (word.length() == 15 && k >= 1 && s <= 15 && k < s) {

        int left = k;   
        int right = s - 2; 

        while (left < right) {
            swap(word[left], word[right]);
            left++;
            right--;
        }

        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Неверные данные\n";
    }

    return 0;
}
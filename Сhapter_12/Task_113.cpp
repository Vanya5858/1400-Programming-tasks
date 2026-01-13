#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово из 12 букв: ";
    cin >> word;

    if (word.length() == 12) {

        int left = 2;  
        int right = 8;

        while (left < right) {
            swap(word[left], word[right]);
            left++;
            right--;
        }

        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Слово должно содержать 12 букв\n";
    }

    return 0;
}
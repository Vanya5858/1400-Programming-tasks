#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    int s, k;
    cout << "Введите слово: ";
    cin >> word;
    cout << "Введите s и k (s < k): ";
    cin >> s >> k;

    if (s >= 1 && k <= (int)word.length() && s < k) {
        char s_letter = word[s - 1];
        // Сдвигаем буквы с (s+1)-й по k-ю влево
        for (int i = s - 1; i < k - 1; i++) {
            word[i] = word[i + 1];
        }
        word[k - 1] = s_letter; // s-ю букву на k-е место

        cout << "Результат: " << word << "\n";
    }
    else {
        cout << "Неверные значения s и k\n";
    }

    return 0;
}
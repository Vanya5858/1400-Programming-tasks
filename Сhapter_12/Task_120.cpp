#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int n1, n2;
    cout << "Введите предложение: ";
    getline(cin, sentence);
    cout << "Введите n1 и n2 (n1 <= n2): ";
    cin >> n1 >> n2;

    if (n1 >= 1 && n2 <= (int)sentence.length() && n1 <= n2) {
        int count = n2 - n1 + 1;
        for (size_t i = n1 - 1; i < sentence.length() - count; i++) {
            sentence[i] = sentence[i + count];
        }
        // Заполняем конец символами '_'
        for (size_t i = sentence.length() - count; i < sentence.length(); i++) {
            sentence[i] = '_';
        }

        cout << "Результат: " << sentence << "\n";
    }
    else {
        cout << "Неверные значения n1 и n2\n";
    }

    return 0;
}
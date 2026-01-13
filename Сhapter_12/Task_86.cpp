#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sequence;
    cout << "Введите последовательность символов: ";
    getline(cin, sequence);

    // Случай 2: все символы могут быть одинаковыми
    if (sequence.empty()) {
        cout << "Последовательность пуста\n";
        return 0;
    }

    char first_char = sequence[0];
    int count = 1;

    for (size_t i = 1; i < sequence.length(); i++) {
        if (sequence[i] == first_char) {
            count++;
        }
        else {
            break;
        }
    }

    cout << "Количество одинаковых символов в начале: " << count << "\n";

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // Случай 2: запятых в предложении может не быть
    size_t comma_pos = sentence.find(',');
    int count_h = 0;

    if (comma_pos != string::npos) {
        for (size_t i = 0; i < comma_pos; i++) {
            if (sentence[i] == 'н' || sentence[i] == 'Н') {
                count_h++;
            }
        }
        cout << "Количество букв 'Н' перед первой запятой: " << count_h << "\n";
    }
    else {
        cout << "В предложении нет запятых\n";
    }

    return 0;
}
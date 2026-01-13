#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string text;
    cout << "Введите текст: ";
    getline(cin, text);

    // Случай 2: букв 'у' в тексте может не быть
    int count_u = 0;
    size_t first_sentence_end = text.find_first_of(".!?");

    if (first_sentence_end != string::npos) {
        string first_sentence = text.substr(0, first_sentence_end + 1);

        for (size_t i = 0; i < first_sentence.length(); i++) {
            if (first_sentence[i] == 'у' || first_sentence[i] == 'У') {
                count_u++;
            }
        }
    }

    if (count_u > 0) {
        cout << "Количество букв 'у' в первом предложении: " << count_u << "\n";
    }
    else {
        cout << "В первом предложении нет букв 'у'\n";
    }

    return 0;
}
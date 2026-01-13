#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int count_a = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'а' || sentence[i] == 'А') {
            count_a++;
        }
    }

    if (!sentence.empty()) {
        double percentage = (count_a * 100.0) / sentence.length();
        cout << "Доля букв 'а': " << fixed << setprecision(2) << percentage << "%\n";
    }

    return 0;
}
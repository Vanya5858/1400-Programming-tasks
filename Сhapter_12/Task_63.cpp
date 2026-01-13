#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int count_po = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    // a) буквосочетание "ро"
    for (size_t i = 0; i < sentence.length() - 1; i++) {
        if ((sentence[i] == 'р' && sentence[i + 1] == 'о') ||
            (sentence[i] == 'Р' && sentence[i + 1] == 'О')) {
            count_po++;
        }
    }

    cout << "а) Число вхождений 'ро': " << count_po << "\n";

    // b) любое буквосочетание из двух букв
    string combination;
    cout << "b) Введите буквосочетание из двух букв: ";
    cin >> combination;

    int count_comb = 0;
    if (combination.length() == 2) {
        for (size_t i = 0; i < sentence.length() - 1; i++) {
            if (sentence[i] == combination[0] && sentence[i + 1] == combination[1]) {
                count_comb++;
            }
        }
        cout << "Число вхождений '" << combination << "': " << count_comb << "\n";
    }

    return 0;
}
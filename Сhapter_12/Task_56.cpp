#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    cout << "1,2,5,6,9,10... символы столбиком:\n";
    int counter = 0;
    for (size_t i = 0; i < sentence.length(); i++) {
        counter++;
        if (counter <= 2 || (counter >= 5 && counter <= 6) ||
            (counter >= 9 && counter <= 10)) {
            cout << sentence[i] << "\n";
        }
        if (counter == 10) counter = 0;
    }

    return 0;
}
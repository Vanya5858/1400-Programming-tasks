#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int count_o = 0, count_a = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    for (size_t i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'о' || sentence[i] == 'О') count_o++;
        else if (sentence[i] == 'а' || sentence[i] == 'А') count_a++;
    }

    if (count_o > count_a) {
        cout << "Буква 'о' встречается чаще\n";
    }
    else if (count_a > count_o) {
        cout << "Буква 'а' встречается чаще\n";
    }
    else {
        cout << "Буквы встречаются одинаково часто\n";
    }

    return 0;
}
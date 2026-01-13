#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string sentence;
    int vowels = 0;
    cout << "Введите предложение: ";
    getline(cin, sentence);

    string vowel_letters = "аеёиоуыэюяАЕЁИОУЫЭЮЯ";

    for (size_t i = 0; i < sentence.length(); i++) {
        if (vowel_letters.find(sentence[i]) != string::npos) {
            vowels++;
        }
    }

    cout << "Число гласных букв: " << vowels << "\n";

    return 0;
}
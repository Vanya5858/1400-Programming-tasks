#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

// Функция для расчета доли буквы в предложении (в %)
double letterPercentage(const string& sentence, char letter) {
    if (sentence.empty()) return 0.0;

    int letterCount = 0;
    int totalLetters = 0;
    char lowerLetter = tolower(letter);

    for (char ch : sentence) {
        if (isalpha(ch)) { // Считаем только буквы
            totalLetters++;
            if (tolower(ch) == lowerLetter) {
                letterCount++;
            }
        }
    }

    if (totalLetters == 0) return 0.0;
    return (letterCount * 100.0) / totalLetters;
}

int main() {
    setlocale(LC_ALL, "RU");

    string sentence1, sentence2;
    char letter = 'o'; // Буква 'o' по условию

    cout << "Введите первое предложение: ";
    getline(cin, sentence1);

    cout << "Введите второе предложение: ";
    getline(cin, sentence2);

    double percentage1 = letterPercentage(sentence1, letter);
    double percentage2 = letterPercentage(sentence2, letter);

    cout << fixed << setprecision(2);
    cout << "\nРезультат:" << endl;
    cout << "Доля буквы '" << letter << "' в первом предложении: " << percentage1 << "%" << endl;
    cout << "Доля буквы '" << letter << "' во втором предложении: " << percentage2 << "%" << endl;

    if (percentage1 > percentage2) {
        cout << "Доля буквы '" << letter << "' больше в первом предложении" << endl;
    }
    else if (percentage2 > percentage1) {
        cout << "Доля буквы '" << letter << "' больше во втором предложении" << endl;
    }
    else {
        cout << "Доли буквы '" << letter << "' равны" << endl;
    }

    return 0;
}
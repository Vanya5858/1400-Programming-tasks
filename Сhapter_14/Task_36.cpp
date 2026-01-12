#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Функция для подсчета заданной буквы в предложении
int countLetterInSentence(const string& sentence, char letter) {
    int count = 0;
    char lowerLetter = tolower(letter);

    for (char ch : sentence) {
        if (tolower(ch) == lowerLetter) {
            count++;
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "RU");

    string sentence1, sentence2, sentence3;
    char letter;

    cout << "Введите букву для подсчета: ";
    cin >> letter;
    cin.ignore(); // Игнорируем оставшийся символ новой строки

    cout << "Введите первое предложение: ";
    getline(cin, sentence1);

    cout << "Введите второе предложение: ";
    getline(cin, sentence2);

    cout << "Введите третье предложение: ";
    getline(cin, sentence3);

    int count1 = countLetterInSentence(sentence1, letter);
    int count2 = countLetterInSentence(sentence2, letter);
    int count3 = countLetterInSentence(sentence3, letter);
    int total = count1 + count2 + count3;

    cout << "\nРезультат:" << endl;
    cout << "Букв '" << letter << "' в первом предложении: " << count1 << endl;
    cout << "Букв '" << letter << "' во втором предложении: " << count2 << endl;
    cout << "Букв '" << letter << "' в третьем предложении: " << count3 << endl;
    cout << "Общее количество: " << total << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Функция для нахождения порядкового номера последнего вхождения буквы
int lastOccurrenceIndex(const string& sentence, char letter) {
    char lowerLetter = tolower(letter);

    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (tolower(sentence[i]) == lowerLetter) {
            return i + 1; // Порядковый номер (с 1)
        }
    }
    return 0; // Буква не найдена
}

int main() {
    setlocale(LC_ALL, "RU");

    string sentence1, sentence2;
    char letter = 'i'; // Буква 'i' по условию

    cout << "Введите первое предложение: ";
    getline(cin, sentence1);

    cout << "Введите второе предложение: ";
    getline(cin, sentence2);

    int index1 = lastOccurrenceIndex(sentence1, letter);
    int index2 = lastOccurrenceIndex(sentence2, letter);

    cout << "\nРезультат:" << endl;
    cout << "Порядковый номер последней буквы '" << letter << "' в первом предложении: ";
    if (index1 > 0) {
        cout << index1 << endl;
    }
    else {
        cout << "не найдена" << endl;
    }

    cout << "Порядковый номер последней буквы '" << letter << "' во втором предложении: ";
    if (index2 > 0) {
        cout << index2 << endl;
    }
    else {
        cout << "не найдена" << endl;
    }

    if (index1 > 0 && index2 > 0) {
        if (index1 > index2) {
            cout << "Буква '" << letter << "' имеет больший порядковый номер в первом предложении" << endl;
        }
        else if (index2 > index1) {
            cout << "Буква '" << letter << "' имеет больший порядковый номер во втором предложении" << endl;
        }
        else {
            cout << "Порядковые номера последних букв '" << letter << "' равны" << endl;
        }
    }
    else if (index1 > 0) {
        cout << "Буква '" << letter << "' есть только в первом предложении" << endl;
    }
    else if (index2 > 0) {
        cout << "Буква '" << letter << "' есть только во втором предложении" << endl;
    }
    else {
        cout << "Буква '" << letter << "' не найдена ни в одном предложении" << endl;
    }

    return 0;
}
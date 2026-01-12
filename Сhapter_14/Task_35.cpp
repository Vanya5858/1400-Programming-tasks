#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Функция для подсчета букв 'n' или 'н' в предложении
int countLetterN(const string& sentence) {
    int count = 0;
    for (char ch : sentence) {
        // Проверяем как латинскую 'n', так и русскую 'н'
        if (tolower(ch) == 'n' || tolower(ch) == 'н') {
            count++;
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "RU");

    string sentence1, sentence2;

    cout << "Введите первое предложение: ";
    getline(cin, sentence1);

    cout << "Введите второе предложение: ";
    getline(cin, sentence2);

    int count1 = countLetterN(sentence1);
    int count2 = countLetterN(sentence2);

    cout << "\nРезультат:" << endl;
    cout << "Букв 'n'/'н' в первом предложении: " << count1 << endl;
    cout << "Букв 'n'/'н' во втором предложении: " << count2 << endl;
    cout << "Общее количество: " << count1 + count2 << endl;

    return 0;
}
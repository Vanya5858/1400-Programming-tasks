#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите количество слов: ";
    cin >> n;
    cin.ignore(); // очищаем буфер

    string words[100];
    string sorted_words[100];

    cout << "Введите слова (через Enter):\n";
    for (int i = 0; i < n; i++) {
        cout << "Слово " << i + 1 << ": ";
        getline(cin, words[i]);
        sorted_words[i] = words[i];
    }

    // а) средняя длина слова
    int total_length = 0;
    for (int i = 0; i < n; i++) {
        total_length += words[i].length();
    }
    double avg_length = (double)total_length / n;

    // б) слова с более 5 символов
    int long_words = 0;
    for (int i = 0; i < n; i++) {
        if (words[i].length() > 5) {
            long_words++;
        }
    }

    // в) длина самого длинного слова
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        if (words[i].length() > max_len) {
            max_len = words[i].length();
        }
    }

    // г) номер первого самого короткого слова
    int min_len = words[0].length();
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (words[i].length() < min_len) {
            min_len = words[i].length();
            min_index = i;
        }
    }

    // д) длина слова, больше которого только в самом длинном слове
    int second_max_len = 0;
    for (int i = 0; i < n; i++) {
        if (words[i].length() > second_max_len && words[i].length() < max_len) {
            second_max_len = words[i].length();
        }
    }

    // е) слова, начинающиеся на "к" или "К"
    int k_words = 0;
    for (int i = 0; i < n; i++) {
        char first_char = tolower(words[i][0]);
        if (first_char == 'к') {
            k_words++;
        }
    }

    // Сортировка по алфавиту
    sort(sorted_words, sorted_words + n);

    // Вывод результатов
    cout << "\nРезультаты:\n";
    cout << "а) Средняя длина слова: " << avg_length << " символов\n";
    cout << "б) Слов с более 5 символов: " << long_words << endl;
    cout << "в) Длина самого длинного слова: " << max_len << " символов\n";
    cout << "г) Первое самое короткое слово: слово №" << min_index + 1
        << " ('" << words[min_index] << "')\n";

    if (second_max_len > 0) {
        cout << "д) Длина второго по длине слова: " << second_max_len << " символов\n";
    }
    else {
        cout << "д) Все слова одинаковой длины\n";
    }

    cout << "е) Слов на букву 'к' или 'К': " << k_words << endl;

    cout << "\nСлова в алфавитном порядке:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << sorted_words[i] << endl;
    }

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    const int QUESTIONS = 20;
    int answers[QUESTIONS];
    int score = 0;

    cout << "Ответьте на 20 вопросов:" << endl;
    cout << "-----------------------" << endl;

    for (int i = 0; i < QUESTIONS; i++) {
        // Генерируем множители от 2 до 9
        int a = 2 + rand() % 8;
        int b = 2 + rand() % 8;

        cout << "\nВопрос " << i + 1 << ": ";
        cout << a << " * " << b << " = ";

        // Получаем ответ от пользователя
        int answer;
        cin >> answer;
        answers[i] = answer;

        // Проверяем ответ
        if (answer == a * b) {
            cout << "Верно!" << endl;
            score++;
        }
        else {
            cout << "Неверно! Правильный ответ: " << a * b << endl;
        }
    }

    // Выводим результаты
    cout << "\n======================" << endl;
    cout << "Итоговый результат: " << score << " из " << QUESTIONS << endl;
    cout << "Процент правильных ответов: " << (score * 100.0 / QUESTIONS) << "%" << endl;

    if (score == QUESTIONS) {
        cout << "Отлично! Вы знаете таблицу умножения!" << endl;
    }
    else if (score >= QUESTIONS * 0.8) {
        cout << "Хорошо!" << endl;
    }
    else if (score >= QUESTIONS * 0.6) {
        cout << "Удовлетворительно" << endl;
    }
    else {
        cout << "Нужно повторить таблицу умножения" << endl;
    }

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    int variant;
    cout << "Выберите вариант (1-3): ";
    cin >> variant;

    if (variant == 1) {
        // Вариант а: один вопрос
        int a = rand() % 9 + 1; // 1-9
        int b = rand() % 9 + 1; // 1-9

        cout << "Чему равно произведение " << a << " * " << b << "? ";
        int answer;
        cin >> answer;

        if (answer == a * b) {
            cout << "Правильно!" << endl;
        }
        else {
            cout << "Неправильно! Правильный ответ: " << a * b << endl;
        }

    }
    else if (variant == 2) {
        // Вариант б: 20 вопросов
        int correct = 0, incorrect = 0;

        for (int i = 1; i <= 20; i++) {
            int a = rand() % 9 + 1;
            int b = rand() % 9 + 1;

            cout << i << ") " << a << " * " << b << " = ";
            int answer;
            cin >> answer;

            if (answer == a * b) {
                cout << "Верно!" << endl;
                correct++;
            }
            else {
                cout << "Неверно! Правильно: " << a * b << endl;
                incorrect++;
            }
        }

        cout << "\nИтог: правильно " << correct << ", неправильно " << incorrect << endl;

    }
    else if (variant == 3) {
        // Вариант в: до ввода 0
        int questionNum = 1;
        while (true) {
            int a = rand() % 9 + 1;
            int b = rand() % 9 + 1;

            cout << questionNum << ") " << a << " * " << b << " = ";
            int answer;
            cin >> answer;

            if (answer == 0) {
                cout << "Игра окончена." << endl;
                break;
            }

            if (answer == a * b) {
                cout << "Верно!" << endl;
            }
            else {
                cout << "Неверно! Правильно: " << a * b << endl;
            }

            questionNum++;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 28;
    int grades[SIZE];

    // Заполняем случайными оценками (2-5)
    cout << "Оценки по информатике: ";
    for (int i = 0; i < SIZE; i++) {
        grades[i] = 2 + rand() % 4; // случайные оценки от 2 до 5
        cout << grades[i] << " ";
    }
    cout << endl;

    // Проверяем наличие двоек
    bool hasTwos = false;
    for (int i = 0; i < SIZE; i++) {
        hasTwos = hasTwos || (grades[i] == 2);
    }

    if (hasTwos) {
        cout << "В классе есть двойки по информатике" << endl;
    }
    else {
        cout << "В классе нет двоек по информатике" << endl;
    }

    return 0;
}
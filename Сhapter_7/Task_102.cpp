#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double height, prev;
    bool isDecreasing = true;
    int students;

    cout << "Введите количество учеников в классе: ";
    cin >> students;

    if (students < 2) {
        cout << "Нужно минимум 2 ученика";
        return 0;
    }

    cout << "Введите рост учеников в порядке списка: ";
    cin >> prev;

    for (int i = 1; i < students; i++) {
        cin >> height;

        if (height > prev) {
            isDecreasing = false;
        }

        prev = height;
    }

    cout << (isDecreasing ? "Ученики перечислены в порядке убывания роста" :
        "Ученики не перечислены в порядке убывания роста");
    return 0;
}
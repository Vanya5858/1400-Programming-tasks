#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double score1, score2, total1 = 0, total2 = 0;

    cout << "Введите результаты первого десятиборца (10 видов): ";
    for (int i = 0; i < 10; i++) {
        cin >> score1;
        total1 += score1;
    }

    cout << "Введите результаты второго десятиборца (10 видов): ";
    for (int i = 0; i < 10; i++) {
        cin >> score2;
        total2 += score2;
    }

    if (total1 > total2)
        cout << "Первый спортсмен показал лучший результат";
    else if (total2 > total1)
        cout << "Второй спортсмен показал лучший результат";
    else
        cout << "Результаты равны";

    return 0;
}
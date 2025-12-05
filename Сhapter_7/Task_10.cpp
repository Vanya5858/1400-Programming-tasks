#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double score, sum1 = 0, sum2 = 0;

    cout << "Введите результаты первого пятиборца (5 видов): ";
    for (int i = 0; i < 5; i++) {
        cin >> score;
        sum1 += score;
    }

    cout << "Введите результаты второго пятиборца (5 видов): ";
    for (int i = 0; i < 5; i++) {
        cin >> score;
        sum2 += score;
    }

    cout << "Сумма баллов первого спортсмена = " << sum1 << endl;
    cout << "Сумма баллов второго спортсмена = " << sum2;
    return 0;
}
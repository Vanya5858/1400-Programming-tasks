#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int judges = 8;
    double scores[judges];

    cout << "Введите оценки " << judges << " судей:\n";
    for (int i = 0; i < judges; i++) cin >> scores[i];

    // Находим максимальную и минимальную оценки
    double maxScore = scores[0], minScore = scores[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < judges; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxIndex = i;
        }
        if (scores[i] < minScore) {
            minScore = scores[i];
            minIndex = i;
        }
    }

    // Удаляем по одной максимальной и минимальной оценке
    double sum = 0;
    int count = 0;
    bool maxRemoved = false, minRemoved = false;

    for (int i = 0; i < judges; i++) {
        if (i == maxIndex && !maxRemoved) {
            maxRemoved = true;
            continue;
        }
        if (i == minIndex && !minRemoved) {
            minRemoved = true;
            continue;
        }
        sum += scores[i];
        count++;
    }

    double finalScore = sum / count;
    cout << "Итоговая оценка: " << finalScore << endl;

    return 0;
}
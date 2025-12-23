#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество судей: ";
    cin >> n;

    vector<double> scores(n);
    cout << "Введите оценки судей: ";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    // Находим максимальную и минимальную оценки
    double maxScore = scores[0], minScore = scores[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxIndex = i;
        }
        if (scores[i] < minScore) {
            minScore = scores[i];
            minIndex = i;
        }
    }

    // Удаляем по одному максимуму и минимуму
    double sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i == maxIndex || i == minIndex) continue;
        sum += scores[i];
        count++;
    }

    if (count > 0) {
        cout << "Оценка спортсмена: " << sum / count << endl;
    }
    else {
        cout << "Недостаточно данных\n";
    }

    return 0;
}
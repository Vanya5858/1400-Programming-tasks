#include <iostream>
using namespace std;

struct Weather {
    double precipitation; // осадки в мм
    double temperature;   // температура в °C
};

void analyzePrecipitation(Weather days[], int n) {
    double rainTotal = 0.0;
    double snowTotal = 0.0;

    for (int i = 0; i < n; i++) {
        if (days[i].temperature > 0) {
            rainTotal += days[i].precipitation;
        }
        else {
            snowTotal += days[i].precipitation;
        }
    }

    cout << "За месяц выпало:" << endl;
    cout << "Дождь: " << rainTotal << " мм" << endl;
    cout << "Снег: " << snowTotal << " мм" << endl;
    cout << "Всего осадков: " << rainTotal + snowTotal << " мм" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    // Данные за 30 дней месяца
    Weather month[30] = {
        {5.2, 3.5}, {0.0, 2.1}, {3.8, -2.5}, {7.1, 5.0}, {1.5, 1.2},
        {4.3, -1.8}, {2.7, 4.5}, {0.8, -3.2}, {6.4, 6.1}, {3.2, 0.5},
        {5.6, 2.8}, {1.1, -0.5}, {4.9, 3.7}, {2.3, -2.1}, {3.5, 4.8},
        {0.4, 1.5}, {7.2, -4.0}, {2.8, 2.3}, {4.1, -1.2}, {5.3, 5.5},
        {1.7, 0.8}, {3.9, 3.1}, {2.5, -0.8}, {6.1, 4.2}, {0.9, -2.7},
        {4.7, 2.5}, {3.3, 1.8}, {2.1, -1.5}, {5.8, 3.9}, {1.3, 0.2}
    };

    analyzePrecipitation(month, 30);

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "Сколько кубиков бросает каждый игрок? ";
    int K;
    cin >> K;

    int sum1 = 0, sum2 = 0, sum3 = 0;

    // Три игрока бросают K кубиков
    cout << "Игрок 1: ";
    for (int i = 0; i < K; i++) {
        int dice = rand() % 6 + 1;
        sum1 += dice;
        cout << dice << " ";
    }
    cout << "= " << sum1 << " очков" << endl;

    cout << "Игрок 2: ";
    for (int i = 0; i < K; i++) {
        int dice = rand() % 6 + 1;
        sum2 += dice;
        cout << dice << " ";
    }
    cout << "= " << sum2 << " очков" << endl;

    cout << "Игрок 3: ";
    for (int i = 0; i < K; i++) {
        int dice = rand() % 6 + 1;
        sum3 += dice;
        cout << dice << " ";
    }
    cout << "= " << sum3 << " очков" << endl;

    // Определяем победителя
    int maxScore = sum1;
    if (sum2 > maxScore) maxScore = sum2;
    if (sum3 > maxScore) maxScore = sum3;

    cout << "\nМаксимальный результат: " << maxScore << endl;
    cout << "Победили игроки: ";

    bool first = true;
    if (sum1 == maxScore) {
        cout << "1";
        first = false;
    }
    if (sum2 == maxScore) {
        if (!first) cout << ", ";
        cout << "2";
        first = false;
    }
    if (sum3 == maxScore) {
        if (!first) cout << ", ";
        cout << "3";
    }
    cout << endl;

    return 0;
}
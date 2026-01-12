#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 30;
    double rain[days];

    cout << "Введите количество осадков за каждый день июня:\n";
    for (int i = 0; i < days; i++) cin >> rain[i];

    double firstHalf = 0, secondHalf = 0;
    for (int i = 0; i < 15; i++) firstHalf += rain[i];
    for (int i = 15; i < 30; i++) secondHalf += rain[i];

    if (firstHalf > secondHalf)
        cout << "В первой половине месяца осадков больше.\n";
    else if (firstHalf < secondHalf)
        cout << "Во второй половине месяца осадков больше.\n";
    else
        cout << "Осадков в обеих половинах поровну.\n";

    double dec1 = 0, dec2 = 0, dec3 = 0;
    for (int i = 0; i < 10; i++) dec1 += rain[i];
    for (int i = 10; i < 20; i++) dec2 += rain[i];
    for (int i = 20; i < 30; i++) dec3 += rain[i];

    if (dec1 >= dec2 && dec1 >= dec3)
        cout << "Больше всего осадков в первой декаде.\n";
    else if (dec2 >= dec1 && dec2 >= dec3)
        cout << "Больше всего осадков во второй декаде.\n";
    else
        cout << "Больше всего осадков в третьей декаде.\n";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    int heights[n];

    cout << "Введите рост " << n << " человек:\n";
    for (int i = 0; i < n; i++) cin >> heights[i];

    int maxHeight = heights[0], minHeight = heights[0];
    for (int i = 1; i < n; i++) {
        if (heights[i] > maxHeight) maxHeight = heights[i];
        if (heights[i] < minHeight) minHeight = heights[i];
    }

    cout << "Самый высокий: " << maxHeight << " см\n";
    cout << "Самый низкий: " << minHeight << " см\n";
    cout << "Разница: " << maxHeight - minHeight << " см\n";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 35;
    int heights[n];

    cout << "Введите рост " << n << " человек:\n";
    for (int i = 0; i < n; i++) cin >> heights[i];

    int maxHeight = heights[0];
    int maxCount = 1;

    for (int i = 1; i < n; i++) {
        if (heights[i] > maxHeight) {
            maxHeight = heights[i];
            maxCount = 1;
        }
        else if (heights[i] == maxHeight) {
            maxCount++;
        }
    }

    cout << "Самый большой рост: " << maxHeight << " см\n";
    cout << "Количество людей с таким ростом: " << maxCount << endl;

    return 0;
}
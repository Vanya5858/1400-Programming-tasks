#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int heights[n];

    cout << "Введите высоту " << n << " горных вершин:\n";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << "\nИсходные высоты: ";
    for (int i = 0; i < n; i++) cout << heights[i] << " ";
    cout << endl;

    int newHeights[n + 1];

    int position;
    cout << "\nВведите позицию для новой вершины (1-" << n + 1 << "): ";
    cin >> position;

    if (position >= 1 && position <= n + 1) {
        // Копируем элементы до позиции
        for (int i = 0; i < position - 1; i++) {
            newHeights[i] = heights[i];
        }

        // Вставляем новую вершину
        int newHeight;
        cout << "Введите высоту новой вершины: ";
        cin >> newHeight;
        newHeights[position - 1] = newHeight;

        // Копируем остальные элементы
        for (int i = position; i < n + 1; i++) {
            newHeights[i] = heights[i - 1];
        }

        cout << "Новый массив с высотами: ";
        for (int i = 0; i < n + 1; i++) cout << newHeights[i] << " ";
        cout << endl;
    }

    return 0;
}
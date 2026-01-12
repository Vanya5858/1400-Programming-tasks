#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 15;
    int heights[SIZE] = { 185, 182, 180, 178, 175, 173, 172, 170, 168, 167, 165, 163, 160, 158, 155 };
    int newHeight = 174; // рост нового ученика

    cout << "Росты учеников (по убыванию): ";
    for (int i = 0; i < SIZE; i++) {
        cout << heights[i] << " ";
    }
    cout << "\nРост нового ученика: " << newHeight << endl;

    // Находим место в рейтинге
    int position = 1;
    for (int i = 0; i < SIZE; i++) {
        // Без if: увеличиваем позицию, если новый ученик ниже текущего
        position += (newHeight < heights[i]);
    }

    cout << "Новый ученик займет " << position << "-е место" << endl;

    return 0;
}
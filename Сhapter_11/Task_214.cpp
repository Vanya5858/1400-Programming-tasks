#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    int heights[100];

    cout << "Введите количество учеников в классе: ";
    cin >> size;

    if (size < 2) {
        cout << "Для проверки порядка нужно минимум 2 ученика!\n";
        return 0;
    }

    cout << "Введите рост " << size << " учеников (в см):\n";
    for (int i = 0; i < size; i++) {
        cout << "Ученик " << i + 1 << ": ";
        cin >> heights[i];
    }

    // Проверяем упорядоченность по убыванию
    bool isDescending = true;
    int violationIndex = -1;

    for (int i = 0; i < size - 1; i++) {
        if (heights[i] < heights[i + 1]) {
            isDescending = false;
            violationIndex = i + 1; // Индекс ученика, нарушающего порядок
            break;
        }
    }

    if (isDescending) {
        cout << "\nУченики перечислены в порядке убывания роста.\n";
        cout << "Росты от большего к меньшему: ";
        for (int i = 0; i < size; i++) {
            cout << heights[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "\nУченики НЕ перечислены в порядке убывания роста.\n";
        cout << "Нарушение порядка на позиции " << violationIndex + 1 << endl;
        cout << "Рост ученика " << violationIndex + 1 << ": " << heights[violationIndex]
            << " см (должен быть <= " << heights[violationIndex - 1] << " см)\n";
    }

    return 0;
}
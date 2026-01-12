#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Размер массива: ";
    cin >> n;

    int source[100]; // фиксированный размер
    int dest1[100];
    int dest2[100];

    if (n > 100) {
        cout << "Слишком большой размер! Максимум 100.\n";
        return 0;
    }

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> source[i];
    }

    // а) Копирование в том же порядке
    for (int i = 0; i < n; i++) {
        dest1[i] = source[i];
    }

    // б) Копирование в обратном порядке
    for (int i = 0; i < n; i++) {
        dest2[i] = source[n - 1 - i];
    }

    cout << "\nа) Массив в том же порядке:\n";
    for (int i = 0; i < n; i++) {
        cout << dest1[i] << " ";
    }

    cout << "\n\nб) Массив в обратном порядке:\n";
    for (int i = 0; i < n; i++) {
        cout << dest2[i] << " ";
    }
    cout << endl;

    return 0;
}
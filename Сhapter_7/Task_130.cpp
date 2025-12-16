#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int SIZE = 20;
    int arr[SIZE];

    cout << "Введите 20 чисел (неубывающая последовательность): ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Найдем повторяющееся число
    int repeated = -1;
    for (int i = 0; i < SIZE - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            repeated = arr[i];
            break;
        }
    }

    if (repeated == -1) {
        cout << "Повторяющихся чисел нет\n";
        return 0;
    }

    // Подсчитаем количество повторений
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == repeated) {
            count++;
        }
    }

    cout << "Число " << repeated << " повторяется " << count << " раз(а)\n";
    return 0;
}
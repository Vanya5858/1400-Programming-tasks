#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int newArr[n + 1];
    int num;
    cout << "\nВведите число для вставки: ";
    cin >> num;

    // а) После первого отрицательного элемента
    int firstNegIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            firstNegIndex = i;
            break;
        }
    }

    if (firstNegIndex != -1) {
        for (int i = 0; i < n; i++) newArr[i] = arr[i];

        // Сдвигаем элементы после найденного вправо
        for (int i = n; i > firstNegIndex + 1; i--) {
            newArr[i] = newArr[i - 1];
        }
        newArr[firstNegIndex + 1] = num;

        cout << "а) После вставки " << num << " после первого отрицательного: ";
        for (int i = 0; i < n + 1; i++) cout << newArr[i] << " ";
        cout << endl;
    }
    else {
        cout << "а) Отрицательных элементов нет\n";
    }

    // б) Перед последним четным элементом
    int lastEvenIndex = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            lastEvenIndex = i;
            break;
        }
    }

    if (lastEvenIndex != -1) {
        for (int i = 0; i < n; i++) newArr[i] = arr[i];

        // Сдвигаем элементы начиная с последнего четного вправо
        for (int i = n; i > lastEvenIndex; i--) {
            newArr[i] = newArr[i - 1];
        }
        newArr[lastEvenIndex] = num;

        cout << "б) После вставки " << num << " перед последним четным: ";
        for (int i = 0; i < n + 1; i++) cout << newArr[i] << " ";
        cout << endl;
    }
    else {
        cout << "б) Четных элементов нет\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int maxSize = 20; 
    int arr[maxSize];
    int n;

    cout << "Введите количество элементов (не более " << maxSize << "): ";
    cin >> n;

    if (n > maxSize || n <= 0) {
        cout << "Неверное количество элементов!\n";
        return 1;
    }

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int insertN, insertM;
    cout << "\nВведите число n для вставки перед элементами > n: ";
    cin >> insertN;
    cout << "Введите число m для вставки после элементов < m: ";
    cin >> insertM;

    // Считаем элементы большие n
    int countGreaterN = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > insertN) countGreaterN++;
    }

    // Считаем элементы меньшие m
    int countLessM = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < insertM) countLessM++;
    }

    cout << "\nЭлементов > " << insertN << ": " << countGreaterN << endl;
    cout << "Элементов < " << insertM << ": " << countLessM << endl;
    cout << "Максимальный размер исходного массива: " << maxSize - (countGreaterN + countLessM) << endl;

    return 0;
}
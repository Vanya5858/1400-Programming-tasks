#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));


    // a)
    cout << "а) Два разных числа: ";
    int a1, b1;
    do {
        a1 = rand() % 2;  // 0-1
        b1 = rand() % 3;  // 0-2
    } while (a1 == b1);
    cout << a1 << " и " << b1 << endl;

    // б)
    cout << "б) Три разных числа: ";
    int a2, b2, c2;
    do {
        a2 = 1 + rand() % 2;  // 1-2
        b2 = rand() % 3;      // 0-2
        c2 = 1 + rand() % 3;  // 1-3
    } while (a2 == b2 || a2 == c2 || b2 == c2);
    cout << a2 << ", " << b2 << ", " << c2 << endl;

    // в)
    cout << "в) 15 чисел: 7 двоек и 8 троек: ";
    int arr[15];
    for (int i = 0; i < 7; i++) arr[i] = 2;
    for (int i = 7; i < 15; i++) arr[i] = 3;

    // Перемешиваем
    for (int i = 0; i < 15; i++) {
        int j = rand() % 15;
        swap(arr[i], arr[j]);
    }

    for (int i = 0; i < 15; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "--- 9.1а: 8 8 8 (5 строк, 3 столбца) ---\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "8 ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1б: 1 1 1 1 1 (7 строк, 5 столбцов) ---\n";
    for (int i = 1; i <= 7; i++) {
        for (int j = 0; j < 5; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1в: 10 10 10 10 (8 строк, 4 столбца) ---\n";
    for (int i = 1; i <= 8; i++) {
        for (int j = 0; j < 4; j++) {
            cout << i * 10 << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1г: 12 12 12 12 (8 строк, 4 столбца) ---\n";
    for (int i = 1; i <= 8; i++) {
        for (int j = 0; j < 4; j++) {
            cout << i * 10 + 2 << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1д: 2..20 (5 строк) ---\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 2; j <= 20; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1е: 15..3 (5 строк) ---\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 15; j >= 3; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1ж: треугольник из нулей ---\n";
    for (int i = 6; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "0 ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1з: убывающие строки 8..1 ---\n";
    for (int i = 8; i >= 1; i--) {
        for (int j = 8; j >= 9 - i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1и: усекаемые строки 2..10 ---\n";
    for (int i = 2; i <= 9; i++) {
        for (int j = i; j <= 10; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1й: возрастающие строки 2..n ---\n";
    for (int i = 2; i <= 10; i++) {
        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1к: треугольник из повторяющихся чисел ---\n";
    for (int i = 3; i <= 6; i++) {
        for (int j = 0; j < i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1л: треугольник из повторяющихся чисел (21..25) ---\n";
    for (int i = 21; i <= 25; i++) {
        for (int j = 21; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1м: убывающий треугольник 1..5 ---\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j <= 8 - i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1н: треугольник из повторяющихся чисел (10..50) ---\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << i * 10 << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1o: Убывающий треугольник чисел 5..9 ---\n";
    for (int i = 5; i <= 9; i++) {
        for (int j = 0; j <= 9 - i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1п: Треугольник из повторяющихся чисел (5, 10, 15, 20, 25) ---\n";
    int val = 5;
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << val << " ";
        }
        cout << endl;
        val += 5;
    }
    cout << endl;

    cout << "--- 9.1р: Матрица 101..165 с шагом 10 по строкам ---\n";
    for (int i = 0; i < 7; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << (101 + i * 10 + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "--- 9.1с: Матрица с убывающими значениями по строкам (51..21) ---\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 8; j++) {
            cout << (51 - i * 10 + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
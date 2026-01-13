#include <iostream>
#include <vector>
using namespace std;

struct DominoPiece {
    int left;
    int right;
};

bool checkDominoSequence(DominoPiece pieces[], int n, bool fixedSides) {
    if (fixedSides) {
        // Случай 1: левая половина в первой таблице, правая - во второй
        for (int i = 0; i < n - 1; i++) {
            if (pieces[i].right != pieces[i + 1].left) {
                cout << "Нарушение на кости №" << i + 2 << endl;
                return false;
            }
        }
    }
    else {
        // Случай 2: каждая таблица может содержать левую или правую половину
        for (int i = 0; i < n - 1; i++) {
            if (pieces[i].right != pieces[i + 1].left &&
                pieces[i].right != pieces[i + 1].right) {
                // Попробуем перевернуть следующую кость
                swap(pieces[i + 1].left, pieces[i + 1].right);
                if (pieces[i].right != pieces[i + 1].left) {
                    cout << "Нарушение на кости №" << i + 2 << endl;
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "RU");

    const int N = 20;
    DominoPiece pieces[N];

    // Заполняем кости домино (пример корректной последовательности)
    int leftValues[N] = { 4, 3, 0, 6, 1, 2, 5, 0, 3, 4, 2, 1, 6, 5, 0, 4, 3, 2, 1, 5 };
    int rightValues[N] = { 3, 0, 6, 1, 2, 5, 0, 3, 4, 2, 1, 6, 5, 0, 4, 3, 2, 1, 5, 6 };

    for (int i = 0; i < N; i++) {
        pieces[i].left = leftValues[i];
        pieces[i].right = rightValues[i];
    }

    cout << "Проверка последовательности костей домино:" << endl;
    cout << "==========================================" << endl;

    // Случай 1: фиксированные стороны
    cout << "\nСлучай 1 (фиксированные стороны):" << endl;
    if (checkDominoSequence(pieces, N, true)) {
        cout << "Последовательность корректна" << endl;
    }
    else {
        cout << "Последовательность нарушена" << endl;
    }

    // Случай 2: стороны могут меняться
    cout << "\nСлучай 2 (стороны могут меняться):" << endl;
    if (checkDominoSequence(pieces, N, false)) {
        cout << "Последовательность корректна" << endl;
    }
    else {
        cout << "Последовательность нарушена" << endl;
    }

    // Вывод последовательности
    cout << "\nПоследовательность костей:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "[" << pieces[i].left << "|" << pieces[i].right << "] ";
        if ((i + 1) % 5 == 0) cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int choice;

    switch (choice) {
    case 1: {
        // а) Цикл с предусловием
        int i = 10;
        while (i <= 30) {
            cout << i << " ";
            i++;
        }
        cout << endl;
        cout << "Выполнено с предусловием (while)\n";
        break;
    }

    case 2: {
        // б) Цикл с постусловием
        int i = 10;
        do {
            cout << i << " ";
            i++;
        } while (i <= 30);
        cout << endl;
        cout << "Выполнено с постусловием (do-while)\n";
        break;
    }

    case 3: {
        // в) Цикл с параметром
        for (int i = 10; i <= 30; i++) {
            cout << i << " ";
        }
        cout << endl;
        cout << "Выполнено с параметром (for)\n";
        break;
    }

    default:
        cout << "Неверный выбор!\n";
        return 1;
    }

    return 0;
}
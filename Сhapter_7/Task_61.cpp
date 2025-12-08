#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double height;
    int countLess165 = 0;

    cout << "Введите рост 12 юношей (в см): ";
    for (int i = 0; i < 12; i++) {
        cin >> height;
        if (height < 165)
            countLess165++;
    }

    cout << "Количество юношей с ростом менее 165 см: " << countLess165;
    return 0;
}
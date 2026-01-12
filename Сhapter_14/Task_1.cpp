#include <iostream>
using namespace std;

void drawLine60() {
    for (int i = 0; i < 60; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Линия из 60 звёздочек:" << endl;
    drawLine60();
    return 0;
}
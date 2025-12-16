#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int N = 15;
    int heights[N];

    cout << "Введите рост 15 учеников (по убыванию): ";
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int newHeight;
    cout << "Введите рост нового ученика: ";
    cin >> newHeight;

    int place = 1;
    while (place <= N && newHeight < heights[place - 1]) {
        place++;
    }

    cout << "Место нового ученика: " << place << endl;
    return 0;
}
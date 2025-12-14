#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите n: ";
    cin >> n;

    int i = 1;
    while (i * i <= n) {
        cout << i * i << " ";
        i++;
    }
    return 0;
}
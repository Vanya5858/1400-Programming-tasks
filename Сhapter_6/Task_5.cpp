#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num = 5000;
    while (num % 139 != 0) {
        num--;
    }
    cout << "Максимальное число не превышающее 5000, делящееся на 139: " << num << endl;

    return 0;
}
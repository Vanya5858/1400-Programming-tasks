#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    long long factorial;
    cout << "Введите факториал: ";
    cin >> factorial;

    int n = 1;
    long long product = 1;

    while (product < factorial) {
        n++;
        product *= n;
    }

    if (product == factorial) {
        cout << "Число: " << n << endl;
    }
    else {
        cout << "Такого факториала не существует\n";
    }

    return 0;
}
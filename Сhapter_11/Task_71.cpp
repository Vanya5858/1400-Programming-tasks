#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    int grades[n];

    cout << "Введите оценки по химии для " << n << " учеников:\n";
    for (int i = 0; i < n; i++) cin >> grades[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (grades[i] == 2) count++;
    }

    cout << "Количество неуспевающих учеников: " << count << endl;
    return 0;
}
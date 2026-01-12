#include <iostream>
#include <vector>
using namespace std;

// Функция для расчета НОД (алгоритм Евклида)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для расчета НОД нескольких чисел
int gcdMultiple(const vector<int>& numbers) {
    if (numbers.empty()) return 0;

    int result = numbers[0];
    for (size_t i = 1; i < numbers.size(); i++) {
        result = gcd(result, numbers[i]);
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите количество чисел: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Введите " << n << " натуральных чисел:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Число " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int result = gcdMultiple(numbers);

    cout << "\nНОД всех чисел = " << result << endl;

    return 0;
}
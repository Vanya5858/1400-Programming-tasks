#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Ошибка: n должно быть положительным";
        return 0;
    }

    int a1, a2, a_n_minus_1, a_n;

    cout << "Введите " << n << " целых чисел: ";


    cin >> a1;
    if (n > 1) {
        cin >> a2;
    }
    else {
        a2 = a1;
    }

    int temp;
    for (int i = 3; i < n; i++) {
        cin >> temp;
    }

    if (n > 2) {
        cin >> a_n_minus_1; 
        cin >> a_n;         
    }
    else if (n == 2) {
        a_n_minus_1 = a1; 
        a_n = a2;          
    }
    else { 
        a_n_minus_1 = a1;
        a_n = a1;
    }

    int sum_first_last = a1 + a_n;
    int diff_second_prevlast = a2 - a_n_minus_1;

    cout << "\nа) a1 + an = " << sum_first_last << endl;
    cout << "б) a2 - a_{n-1} = " << diff_second_prevlast << endl;

    return 0;
}
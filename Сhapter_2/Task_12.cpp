#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int D, N, S;
    cout << "\t\t\tПрограмма для вычисления плотности населения(D)\n";
    cout << "Введите количество жителей района(N чел): ";
    cin >> N;
    cout << "Введите площать данного района(S Км^2): ";
    cin >> S;
    D = N / S;
    cout << "\nОтвет: D = N / S = " << D << " чел./км^2\n\n";
    return 0;
}
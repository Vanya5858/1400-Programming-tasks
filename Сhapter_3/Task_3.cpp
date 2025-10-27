#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int days = 234;  // заданное количество дней

    // Вычисление числа полных недель (1 неделя = 7 дней)
    int weeks = days / 7;

    // Вычисление оставшихся дней
    int remaining_days = days % 7;

    // Вывод результатов
    cout << "Прошло дней: " << days << endl;
    cout << "Полных недель: " << weeks << endl;
    cout << "Остаток дней: " << remaining_days << endl;

    return 0;
}
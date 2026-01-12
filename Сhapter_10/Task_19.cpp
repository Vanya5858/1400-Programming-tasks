#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));


    string cards[9] = { "Шестёрка", "Семёрка", "Восьмёрка", "Девятка",
                      "Десятка", "Валет", "Дама", "Король", "Туз" };


    int index = rand() % 9;

    cout << "Выбрана карта: " << cards[index] << endl;

    return 0;
}
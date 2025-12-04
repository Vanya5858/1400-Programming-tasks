#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int year;
    cout << "Введите год нашей эры: ";
    cin >> year;

    string animals[] = {
        "Крыса", "Корова", "Тигр", "Заяц", "Дракон", "Змея",
        "Лошадь", "Овца", "Обезьяна", "Петух", "Собака", "Свинья"
    };
    string colors[] = { "Зеленый", "Красный", "Желтый", "Белый", "Черный" };

    // 1984 год — начало цикла: Зеленая Крыса (индекс 0)
    int cycleYear = (year - 1984) % 60;
    if (cycleYear < 0) cycleYear += 60;

    int animalIndex = cycleYear % 12;
    int colorIndex = (cycleYear / 2) % 5;

    cout << animals[animalIndex] << ", " << colors[colorIndex] << endl;
    return 0;
}
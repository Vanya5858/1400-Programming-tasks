#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    char gender; // 'M' - мужчина, 'F' - женщина
    double weight; // вес в кг
};

double totalMaleWeight(Person people[], int n) {
    double total = 0.0;

    for (int i = 0; i < n; i++) {
        if (people[i].gender == 'M' || people[i].gender == 'м') {
            total += people[i].weight;
        }
    }

    return total;
}

int main() {
    setlocale(LC_ALL, "RU");

    Person people[20] = {
        {"Иван", 25, 'M', 78.5},
        {"Мария", 30, 'F', 62.3},
        {"Петр", 35, 'M', 85.2},
        {"Анна", 28, 'F', 58.7},
        {"Сергей", 40, 'M', 92.1},
        {"Ольга", 32, 'F', 65.4},
        {"Алексей", 27, 'M', 76.8},
        {"Екатерина", 29, 'F', 61.9},
        {"Дмитрий", 33, 'M', 88.3},
        {"Наталья", 31, 'F', 59.2},
        {"Андрей", 26, 'M', 81.7},
        {"Ирина", 34, 'F', 63.5},
        {"Михаил", 38, 'M', 90.5},
        {"Татьяна", 36, 'F', 67.8},
        {"Владимир", 42, 'M', 86.9},
        {"Светлана", 39, 'F', 64.1},
        {"Николай", 45, 'M', 94.2},
        {"Людмила", 37, 'F', 66.3},
        {"Юрий", 31, 'M', 79.4},
        {"Елена", 28, 'F', 60.7}
    };

    double totalWeight = totalMaleWeight(people, 20);

    cout << "Общая масса мужчин: " << totalWeight << " кг" << endl;

    // Дополнительная информация
    int maleCount = 0;
    for (int i = 0; i < 20; i++) {
        if (people[i].gender == 'M') maleCount++;
    }
    cout << "Количество мужчин: " << maleCount << endl;
    cout << "Средний вес мужчин: " << totalWeight / maleCount << " кг" << endl;

    return 0;
}
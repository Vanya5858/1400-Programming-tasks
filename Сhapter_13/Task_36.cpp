#include <iostream>
#include <string>
using namespace std;

struct Student {
    string surname;
    double height; // рост в см
};

void findHeightInfo(Student students[], int n) {
    // а) Самый высокий и самый низкий
    Student tallest = students[0];
    Student shortest = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].height > tallest.height) {
            tallest = students[i];
        }
        if (students[i].height < shortest.height) {
            shortest = students[i];
        }
    }

    cout << "а) Самый высокий: " << tallest.surname << " (" << tallest.height << " см)" << endl;
    cout << "   Самый низкий: " << shortest.surname << " (" << shortest.height << " см)" << endl;

    // б) Два самых высоких (исключая действительно самого высокого)
    Student secondTallest = shortest; // начинаем с самого низкого
    Student thirdTallest = shortest;

    for (int i = 0; i < n; i++) {
        if (students[i].surname != tallest.surname) {
            if (students[i].height > secondTallest.height) {
                thirdTallest = secondTallest;
                secondTallest = students[i];
            }
            else if (students[i].height > thirdTallest.height) {
                thirdTallest = students[i];
            }
        }
    }

    cout << "б) Два самых высоких (исключая первого):" << endl;
    cout << "   1. " << secondTallest.surname << " (" << secondTallest.height << " см)" << endl;
    cout << "   2. " << thirdTallest.surname << " (" << thirdTallest.height << " см)" << endl;

    // в) Два самых высоких без двух проходов
    Student max1 = students[0];
    Student max2 = students[1];

    if (max2.height > max1.height) {
        swap(max1, max2);
    }

    for (int i = 2; i < n; i++) {
        if (students[i].height > max1.height) {
            max2 = max1;
            max1 = students[i];
        }
        else if (students[i].height > max2.height) {
            max2 = students[i];
        }
    }

    cout << "в) Два самых высоких в классе:" << endl;
    cout << "   1. " << max1.surname << " (" << max1.height << " см)" << endl;
    cout << "   2. " << max2.surname << " (" << max2.height << " см)" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    Student students[25] = {
        {"Иванов", 178.5}, {"Петров", 182.2}, {"Сидоров", 175.8},
        {"Кузнецов", 180.1}, {"Смирнов", 185.3}, {"Васильев", 176.7},
        {"Попов", 179.5}, {"Новиков", 181.9}, {"Федоров", 177.2},
        {"Морозов", 174.4}, {"Волков", 183.6}, {"Алексеев", 172.3},
        {"Лебедев", 179.8}, {"Семенов", 176.5}, {"Егоров", 180.9},
        {"Павлов", 178.2}, {"Козлов", 181.4}, {"Степанов", 175.1},
        {"Николаев", 182.7}, {"Орлов", 179.3}, {"Андреев", 177.8},
        {"Макаров", 180.5}, {"Никитин", 176.9}, {"Захаров", 178.7},
        {"Зайцев", 181.1}
    };

    findHeightInfo(students, 25);

    return 0;
}
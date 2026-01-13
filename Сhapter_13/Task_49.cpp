#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string surname;
    double height;
};

bool compareByHeight(Student a, Student b) {
    return a.height < b.height; // по возрастанию роста
}

void sortStudents(Student students[], int n) {
    // Сортируем учеников по росту (пузырьковая сортировка)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].height > students[j + 1].height) {
                swap(students[j], students[j + 1]);
            }
        }
    }
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

    cout << "Исходный список учеников:" << endl;
    cout << "=========================" << endl;
    for (int i = 0; i < 25; i++) {
        cout << students[i].surname << ": " << students[i].height << " см" << endl;
    }

    // Сортируем учеников по возрастанию роста
    sortStudents(students, 25);

    cout << "\n\nУченики в порядке возрастания роста:" << endl;
    cout << "=====================================" << endl;
    for (int i = 0; i < 25; i++) {
        cout << i + 1 << ". " << students[i].surname
            << " (" << students[i].height << " см)" << endl;
    }

    return 0;
}
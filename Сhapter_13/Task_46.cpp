#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    string surname;
    double height;
};

bool compareByHeight(Student a, Student b) {
    return a.height > b.height; // по убыванию роста
}

void printStudents(Student students[], int n) {
    cout << "Фамилия\t\tРост" << endl;
    cout << "=====================" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i].surname << "\t\t" << students[i].height << " см" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    // Исходный список (15 учеников, упорядочен по убыванию роста)
    Student students[16]; // 15 + 1 новый

    // Заполняем исходных 15 учеников
    string surnames[] = {
        "Иванов", "Петров", "Сидоров", "Кузнецов", "Смирнов",
        "Васильев", "Попов", "Новиков", "Федоров", "Морозов",
        "Волков", "Алексеев", "Лебедев", "Семенов", "Егоров"
    };

    double heights[] = {
        185.5, 183.2, 182.0, 180.7, 179.3,
        178.1, 176.8, 175.5, 174.2, 172.9,
        171.6, 170.3, 169.0, 167.7, 166.4
    };

    for (int i = 0; i < 15; i++) {
        students[i].surname = surnames[i];
        students[i].height = heights[i];
    }

    // Добавляем нового ученика
    students[15].surname = "Новенький";
    students[15].height = 177.5; // рост новенького

    cout << "Исходный список (15 учеников):" << endl;
    printStudents(students, 15);

    // Сортируем весь список (16 учеников)
    sort(students, students + 16, compareByHeight);

    cout << "\n\nНовый список (16 учеников с новеньким):" << endl;
    printStudents(students, 16);

    return 0;
}
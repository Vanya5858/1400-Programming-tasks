#include <iostream>
#include <string>
using namespace std;

struct Student {
    string surname;
    int grade;
    int mark;
};

void printTopStudentsGrade9(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        if (students[i].grade == 9 && students[i].mark == 5) {
            cout << students[i].surname << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Student students[30] = {
        {"Иванов", 9, 5},
        {"Петров", 10, 4},
        {"Сидоров", 9, 3},
        {"Кузнецов", 9, 5},
        {"Смирнов", 11, 5},
        {"Васильев", 9, 4},
        {"Попов", 10, 5},
        {"Новиков", 9, 5},
        {"Федоров", 9, 2},
        {"Морозов", 11, 5},
        {"Волков", 9, 5},
        {"Алексеев", 10, 3},
        {"Лебедев", 9, 4},
        {"Семенов", 9, 5},
        {"Егоров", 11, 5},
        {"Павлов", 9, 5},
        {"Козлов", 10, 4},
        {"Степанов", 9, 5},
        {"Николаев", 9, 3},
        {"Орлов", 11, 5},
        {"Андреев", 9, 5},
        {"Макаров", 10, 5},
        {"Никитин", 9, 4},
        {"Захаров", 9, 5},
        {"Зайцев", 11, 5},
        {"Борисов", 9, 5},
        {"Кириллов", 10, 4},
        {"Данилов", 9, 5},
        {"Тимофеев", 9, 3},
        {"Филиппов", 11, 5}
    };

    printTopStudentsGrade9(students, 30);

    return 0;
}
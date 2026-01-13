#include <iostream>
#include <string>
using namespace std;

struct Student {
    string surname;
    int marks[4]; // оценки по 4 предметам
};

string findMaxSumStudent(Student students[], int n) {
    int maxSum = -1;
    string maxStudent;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += students[i].marks[j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            maxStudent = students[i].surname;
        }
    }

    return maxStudent;
}

int main() {
    setlocale(LC_ALL, "RU");

    Student students[22] = {
        {"Иванов", {5,4,5,4}}, {"Петров", {4,4,4,4}}, {"Сидоров", {5,5,5,5}},
        {"Кузнецов", {3,4,3,4}}, {"Смирнов", {4,5,4,5}}, {"Васильев", {5,4,5,4}},
        {"Попов", {4,4,4,4}}, {"Новиков", {5,5,4,5}}, {"Федоров", {3,4,3,4}},
        {"Морозов", {4,4,4,4}}, {"Волков", {5,5,5,5}}, {"Алексеев", {4,4,4,4}},
        {"Лебедев", {5,4,5,4}}, {"Семенов", {4,3,4,3}}, {"Егоров", {5,5,5,5}},
        {"Павлов", {4,4,4,4}}, {"Козлов", {5,4,5,4}}, {"Степанов", {3,3,3,3}},
        {"Николаев", {4,5,4,5}}, {"Орлов", {5,5,4,5}}, {"Андреев", {4,4,4,4}},
        {"Макаров", {5,4,5,4}}
    };

    string maxStudent = findMaxSumStudent(students, 22);

    cout << "Ученик с максимальной суммой оценок: " << maxStudent << endl;

    // Дополнительно: вывод всех учеников с их суммами
    cout << "\nСуммы оценок всех учеников:" << endl;
    cout << "============================" << endl;
    for (int i = 0; i < 22; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += students[i].marks[j];
        }
        cout << students[i].surname << ": " << sum << endl;
    }

    return 0;
}
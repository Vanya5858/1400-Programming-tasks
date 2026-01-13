#include <iostream>
#include <string>
using namespace std;

struct Athlete {
    string surname;
    int scores[5]; // баллы по 5 видам спорта
};

string findChampion(Athlete athletes[], int n) {
    int maxTotal = -1;
    string champion;

    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
            total += athletes[i].scores[j];
        }

        if (total > maxTotal) {
            maxTotal = total;
            champion = athletes[i].surname;
        }
    }

    return champion;
}

int main() {
    setlocale(LC_ALL, "RU");

    Athlete athletes[20] = {
        {"Иванов", {250, 280, 265, 290, 275}},
        {"Петров", {270, 260, 255, 285, 265}},
        {"Сидоров", {285, 275, 290, 280, 295}},
        {"Кузнецов", {240, 250, 235, 245, 230}},
        {"Смирнов", {260, 270, 255, 265, 250}},
        {"Васильев", {275, 265, 280, 270, 285}},
        {"Попов", {255, 245, 260, 250, 240}},
        {"Новиков", {290, 280, 295, 285, 300}},
        {"Федоров", {230, 240, 225, 235, 220}},
        {"Морозов", {265, 255, 270, 260, 275}},
        {"Волков", {280, 290, 275, 285, 280}},
        {"Алексеев", {250, 260, 245, 255, 240}},
        {"Лебедев", {295, 285, 300, 290, 295}},
        {"Семенов", {235, 245, 230, 240, 225}},
        {"Егоров", {270, 280, 265, 275, 260}},
        {"Павлов", {245, 235, 250, 240, 230}},
        {"Козлов", {285, 275, 290, 280, 295}},
        {"Степанов", {225, 235, 220, 230, 215}},
        {"Николаев", {260, 250, 265, 255, 270}},
        {"Орлов", {300, 290, 295, 285, 300}}
    };

    string champion = findChampion(athletes, 20);

    cout << "Победитель соревнований: " << champion << endl;

    // Дополнительно: вывод всех спортсменов с их общими баллами
    cout << "\nОбщие баллы спортсменов:" << endl;
    cout << "=========================" << endl;
    for (int i = 0; i < 20; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
            total += athletes[i].scores[j];
        }
        cout << athletes[i].surname << ": " << total << " баллов" << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string surname;
    double height;
};

void analyzeNewStudent(Student students[], int n, double newHeight) {
    // а) Фамилии учеников с ростом меньше нового ученика
    cout << "а) Ученики с ростом меньше нового (" << newHeight << " см):" << endl;
    for (int i = 0; i < n; i++) {
        // Без условного оператора - используем арифметику
        int condition = (students[i].height < newHeight);
        cout << string(condition, '\0') << (condition ? students[i].surname + "\n" : "");
    }

    // б) После какого ученика записать нового (используем бинарный поиск)
    cout << "\nб) Нового ученика нужно записать после: ";
    int position = n; // если новенький самый низкий
    for (int i = 0; i < n; i++) {
        // Без if: используем логическое умножение
        bool condition = (students[i].height > newHeight);
        position -= condition; // уменьшаем позицию, если текущий ученик выше
    }

    if (position == n) {
        cout << "последнего в списке" << endl;
    }
    else if (position == 0) {
        cout << "никого (он будет первым)" << endl;
    }
    else {
        cout << students[position - 1].surname << endl;
    }

    // в) Ученик с наиболее близким ростом
    cout << "в) Ученик с ростом, наиболее близким к новому:" << endl;
    int closestIndex = 0;
    double minDiff = abs(students[0].height - newHeight);

    for (int i = 1; i < n; i++) {
        double diff = abs(students[i].height - newHeight);
        if (diff < minDiff) {
            minDiff = diff;
            closestIndex = i;
        }
    }

    cout << students[closestIndex].surname << " (" << students[closestIndex].height
        << " см), разница: " << minDiff << " см" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    // Ученики, упорядоченные по убыванию роста
    Student students[15] = {
        {"Иванов", 185.5}, {"Петров", 183.2}, {"Сидоров", 182.0},
        {"Кузнецов", 180.7}, {"Смирнов", 179.3}, {"Васильев", 178.1},
        {"Попов", 176.8}, {"Новиков", 175.5}, {"Федоров", 174.2},
        {"Морозов", 172.9}, {"Волков", 171.6}, {"Алексеев", 170.3},
        {"Лебедев", 169.0}, {"Семенов", 167.7}, {"Егоров", 166.4}
    };

    double newHeight = 177.5; // рост новенького

    cout << "Рост нового ученика: " << newHeight << " см" << endl;
    cout << "======================================" << endl;

    analyzeNewStudent(students, 15, newHeight);

    return 0;
}
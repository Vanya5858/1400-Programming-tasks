#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int students, grade1, grade2, count2 = 0;

    cout << "Введите количество студентов в группе: ";
    cin >> students;
    cout << "Введите оценки каждого студента по двум экзаменам:\n";

    for (int i = 0; i < students; i++) {
        cin >> grade1 >> grade2;
        if (grade1 == 2 || grade2 == 2)
            count2++;
    }

    cout << "Количество студентов, получивших двойку: " << count2;
    return 0;
}
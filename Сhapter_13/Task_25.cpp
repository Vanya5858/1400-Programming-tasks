#include <iostream>
#include <string>
using namespace std;

struct PersonHeight {
    string name;
    double height; // рост в см
    char gender; // 'M' - мужчина, 'F' - женщина
};

double averageMaleHeight(PersonHeight people[], int n) {
    double totalHeight = 0.0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (people[i].gender == 'M') {
            totalHeight += people[i].height;
            count++;
        }
    }

    if (count == 0) return 0.0;
    return totalHeight / count;
}

int main() {
    setlocale(LC_ALL, "RU");

    PersonHeight people[22] = {
        {"Иван", 178.5, 'M'}, {"Мария", 165.3, 'F'}, {"Петр", 182.2, 'M'},
        {"Анна", 168.7, 'F'}, {"Сергей", 175.8, 'M'}, {"Ольга", 172.4, 'F'},
        {"Алексей", 180.1, 'M'}, {"Екатерина", 167.9, 'F'}, {"Дмитрий", 185.3, 'M'},
        {"Наталья", 169.2, 'F'}, {"Андрей", 176.7, 'M'}, {"Ирина", 163.5, 'F'},
        {"Михаил", 179.5, 'M'}, {"Татьяна", 170.8, 'F'}, {"Владимир", 181.9, 'M'},
        {"Светлана", 164.1, 'F'}, {"Николай", 177.2, 'M'}, {"Людмила", 166.3, 'F'},
        {"Юрий", 174.4, 'M'}, {"Елена", 168.7, 'F'}, {"Виктор", 183.6, 'M'},
        {"Оксана", 171.5, 'F'}
    };

    double avgHeight = averageMaleHeight(people, 22);

    cout << "Средний рост мужчин: " << avgHeight << " см" << endl;

    // Дополнительная информация
    int maleCount = 0;
    for (int i = 0; i < 22; i++) {
        if (people[i].gender == 'M') maleCount++;
    }
    cout << "Количество мужчин: " << maleCount << endl;

    // Средний рост женщин
    double femaleTotal = 0.0;
    int femaleCount = 0;
    for (int i = 0; i < 22; i++) {
        if (people[i].gender == 'F') {
            femaleTotal += people[i].height;
            femaleCount++;
        }
    }
    cout << "Средний рост женщин: " << femaleTotal / femaleCount << " см" << endl;

    return 0;
}
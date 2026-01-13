#include <iostream>
#include <string>
using namespace std;

struct Person {
    string surname;
    bool married;
    bool hasChildren;
};

void printMarriedWithChildren(Person people[], int n) {
    for (int i = 0; i < n; i++) {
        if (people[i].married && people[i].hasChildren) {
            cout << people[i].surname << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Person people[25] = {
        {"Иванов", true, true},
        {"Петров", false, false},
        {"Сидоров", true, false},
        {"Кузнецов", true, true},
        {"Смирнов", false, true},
        {"Васильев", true, true},
        {"Попов", false, false},
        {"Новиков", true, true},
        {"Федоров", true, false},
        {"Морозов", false, true},
        {"Волков", true, true},
        {"Алексеев", false, false},
        {"Лебедев", true, true},
        {"Семенов", true, false},
        {"Егоров", false, true},
        {"Павлов", true, true},
        {"Козлов", false, false},
        {"Степанов", true, true},
        {"Николаев", true, false},
        {"Орлов", false, true},
        {"Андреев", true, true},
        {"Макаров", true, true},
        {"Никитин", false, false},
        {"Захаров", true, true},
        {"Зайцев", false, false}
    };

    printMarriedWithChildren(people, 25);

    return 0;
}
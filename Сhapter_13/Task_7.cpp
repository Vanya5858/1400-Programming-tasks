#include <iostream>
#include <string>
using namespace std;

struct Person {
    string surname;
    string address;
    string phone;
};

void findPeopleByPhone(Person people[], int n, string prefix) {
    for (int i = 0; i < n; i++) {
        if (people[i].phone.substr(0, prefix.length()) == prefix) {
            cout << people[i].surname << " - " << people[i].address << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    // Случай 1: телефон как число (строка)
    Person people1[3] = {
        {"Иванов", "ул. Ленина, 1", "89051234567"},
        {"Петров", "ул. Мира, 2", "89161234567"},
        {"Сидоров", "пр. Победы, 3", "89051230000"}
    };

    cout << "Случай 1 (телефон как строка из цифр):" << endl;
    findPeopleByPhone(people1, 3, "8905");

    // Случай 2: телефон с разделителями
    Person people2[3] = {
        {"Иванов", "ул. Ленина, 1", "8-905-123-45-67"},
        {"Петров", "ул. Мира, 2", "8-916-123-45-67"},
        {"Сидоров", "пр. Победы, 3", "8-905-123-00-00"}
    };

    cout << "\nСлучай 2 (телефон с разделителями):" << endl;
    findPeopleByPhone(people2, 3, "8-905");

    return 0;
}
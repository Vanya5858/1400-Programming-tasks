#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string surname;
    string phone;
};

void findPhoneBySurname(Contact contacts[], int n, string surname) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (contacts[i].surname == surname) {
            cout << "Телефон " << surname << ": " << contacts[i].phone << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Контакт с фамилией " << surname << " не найден" << endl;
    }
}

void findSurnameByPhone(Contact contacts[], int n, string phone) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (contacts[i].phone == phone) {
            cout << "Владелец телефона " << phone << ": " << contacts[i].surname << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Контакт с телефоном " << phone << " не найден" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Contact contacts[30] = {
        {"Иванов", "89161234567"}, {"Петров", "89051234567"}, {"Сидоров", "89261234567"},
        {"Кузнецов", "89371234567"}, {"Смирнов", "89481234567"}, {"Васильев", "89591234567"},
        {"Попов", "89601234567"}, {"Новиков", "89711234567"}, {"Федоров", "89821234567"},
        {"Морозов", "89931234567"}, {"Волков", "89041234567"}, {"Алексеев", "89151234567"},
        {"Лебедев", "89261234568"}, {"Семенов", "89371234568"}, {"Егоров", "89481234568"},
        {"Павлов", "89591234568"}, {"Козлов", "89601234568"}, {"Степанов", "89711234568"},
        {"Николаев", "89821234568"}, {"Орлов", "89931234568"}, {"Андреев", "89041234568"},
        {"Макаров", "89151234568"}, {"Никитин", "89261234569"}, {"Захаров", "89371234569"},
        {"Зайцев", "89481234569"}, {"Борисов", "89591234569"}, {"Кириллов", "89601234569"},
        {"Данилов", "89711234569"}, {"Тимофеев", "89821234569"}, {"Филиппов", "89931234569"}
    };

    // а) Поиск телефона по фамилии
    cout << "а) Поиск телефона по фамилии:" << endl;
    findPhoneBySurname(contacts, 30, "Иванов");
    findPhoneBySurname(contacts, 30, "Сидоров");
    findPhoneBySurname(contacts, 30, "Неизвестный");

    cout << "\nб) Поиск фамилии по телефону:" << endl;
    // б) Поиск фамилии по телефону
    findSurnameByPhone(contacts, 30, "89051234567");
    findSurnameByPhone(contacts, 30, "89591234568");
    findSurnameByPhone(contacts, 30, "00000000000");

    return 0;
}
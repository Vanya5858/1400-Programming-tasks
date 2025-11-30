#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int CORRECT_PASSWORD = 12345; // Пример правильного пароля
    int enteredPassword;

    do {
        cout << "Введите пароль: ";
        cin >> enteredPassword;

        if (enteredPassword != CORRECT_PASSWORD) {
            cout << "Неверный пароль! Попробуйте снова.\n";
        }
    } while (enteredPassword != CORRECT_PASSWORD);

    cout << "Добро пожаловать! Пароль верный.\n";

    return 0;
}
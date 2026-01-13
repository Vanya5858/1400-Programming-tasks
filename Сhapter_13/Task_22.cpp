#include <iostream>
#include <string>
using namespace std;

struct Institution {
    string name;
    int students;
    string type; // "школа", "техникум", "училище"
};

int totalSchoolStudents(Institution institutions[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (institutions[i].type == "школа") {
            total += institutions[i].students;
        }
    }

    return total;
}

int main() {
    setlocale(LC_ALL, "RU");

    Institution institutions[15] = {
        {"Школа №1", 850, "школа"},
        {"Техникум информатики", 620, "техникум"},
        {"Профессиональное училище №3", 430, "училище"},
        {"Лицей №5", 720, "школа"},
        {"Медицинский техникум", 580, "техникум"},
        {"Гимназия №8", 910, "школа"},
        {"Строительное училище", 390, "училище"},
        {"Школа искусств", 240, "школа"},
        {"Техникум экономики", 670, "техникум"},
        {"Школа №12", 780, "школа"},
        {"Автомеханическое училище", 520, "училище"},
        {"Технический лицей", 690, "школа"},
        {"Педагогический техникум", 610, "техникум"},
        {"Школа №15", 830, "школа"},
        {"Музыкальное училище", 310, "училище"}
    };

    int total = totalSchoolStudents(institutions, 15);

    cout << "Общее число учащихся школ: " << total << " человек" << endl;

    // Дополнительная статистика
    int schoolCount = 0;
    for (int i = 0; i < 15; i++) {
        if (institutions[i].type == "школа") schoolCount++;
    }
    cout << "Количество школ: " << schoolCount << endl;
    cout << "Среднее количество учащихся в школе: " << total / schoolCount << " человек" << endl;

    return 0;
}
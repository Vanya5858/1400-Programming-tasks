#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int DAYS = 30; // июнь имеет 30 дней
    int researcher1[DAYS], researcher2[DAYS], combined[DAYS];

    cout << "Введите данные первого исследователя (30 дней):\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "День " << i + 1 << " (1-8): ";
        cin >> researcher1[i];
    }

    cout << "\nВведите данные второго исследователя (30 дней):\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "День " << i + 1 << " (1-8): ";
        cin >> researcher2[i];
    }

    // Объединяем данные: чередуем данные исследователей
    for (int i = 0; i < DAYS; i++) {
        if (i % 2 == 0) {  // четные дни - первый исследователь
            combined[i] = researcher1[i];
        }
        else {           // нечетные дни - второй исследователь
            combined[i] = researcher2[i];
        }
    }

    // Выводим сводную таблицу
    cout << "\nСводная таблица направления ветра за июнь:\n";
    cout << "День | Код | Направление\n";
    cout << "-------------------------\n";

    for (int i = 0; i < DAYS; i++) {
        string direction;
        switch (combined[i]) {
        case 1: direction = "северный"; break;
        case 2: direction = "южный"; break;
        case 3: direction = "восточный"; break;
        case 4: direction = "западный"; break;
        case 5: direction = "северо-западный"; break;
        case 6: direction = "северо-восточный"; break;
        case 7: direction = "юго-западный"; break;
        case 8: direction = "юго-восточный"; break;
        default: direction = "неизвестно";
        }

        cout << i + 1 << "    | " << combined[i] << "   | " << direction << endl;
    }

    // Статистика по направлениям
    cout << "\nСтатистика направлений ветра:\n";
    int count[9] = { 0 }; // индексы 1-8

    for (int i = 0; i < DAYS; i++) {
        count[combined[i]]++;
    }

    string directions[9] = { "", "северный", "южный", "восточный", "западный",
                           "северо-западный", "северо-восточный",
                           "юго-западный", "юго-восточный" };

    for (int i = 1; i <= 8; i++) {
        if (count[i] > 0) {
            cout << directions[i] << ": " << count[i] << " дней\n";
        }
    }

    return 0;
}
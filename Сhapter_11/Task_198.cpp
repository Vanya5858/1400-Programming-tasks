#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    int arr[SIZE] = { 2, 4, 6, 8, 3, 12, 14, 16, 26, 20 };

    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // а) Поиск первого нечетного элемента
    cout << "а) Поиск первого нечетного элемента:" << endl;
    int firstOddIndex = -1;

    for (int i = 0; i < SIZE; i++) {

        int isOddAndNotSet = ((arr[i] % 2 != 0) && (firstOddIndex == -1));
        firstOddIndex = firstOddIndex * !isOddAndNotSet + i * isOddAndNotSet;
    }

    int hasOdd = (firstOddIndex != -1);

    cout << "   ";
    cout << "Первый нечетный элемент имеет индекс: "
        << firstOddIndex * hasOdd + (-1) * !hasOdd << endl;

    cout << "   Сообщение: ";
    cout << (hasOdd ? "Найден нечетный элемент" : "Нечетных элементов нет") << endl;

    // б) Поиск первого элемента, кратного 13
    cout << "\nб) Поиск первого элемента, кратного 13:" << endl;
    int firstMultiple13Index = -1;

    for (int i = 0; i < SIZE; i++) {
      
        int isMultipleAndNotSet = ((arr[i] % 13 == 0) && (firstMultiple13Index == -1));
        firstMultiple13Index = firstMultiple13Index * !isMultipleAndNotSet + i * isMultipleAndNotSet;
    }


    int hasMultiple13 = (firstMultiple13Index != -1);

    cout << "   ";
    cout << "Первый элемент, кратный 13, имеет индекс: "
        << firstMultiple13Index * hasMultiple13 + (-1) * !hasMultiple13 << endl;

    cout << "   Сообщение: ";
    cout << (hasMultiple13 ? "Найден элемент, кратный 13" : "Элементов, кратных 13, нет") << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите стоимость в копейках (1-9999): ";
    cin >> n;

    int rubles = n / 100;
    int kopeeks = n % 100;

    cout << rubles << " рубл";

    if (rubles % 10 == 1 && rubles != 11) {
        cout << "ь";
    }
    else if (rubles % 10 >= 2 && rubles % 10 <= 4 && (rubles < 10 || rubles > 20)) {
        cout << "я";
    }
    else {
        cout << "ей";
    }

    cout << " " << kopeeks << " копе";

    if (kopeeks % 10 == 1 && kopeeks != 11) {
        cout << "йка";
    }
    else if (kopeeks % 10 >= 2 && kopeeks % 10 <= 4 && (kopeeks < 10 || kopeeks > 20)) {
        cout << "йки";
    }
    else {
        cout << "ек";
    }
    cout << endl;

    return 0;
}
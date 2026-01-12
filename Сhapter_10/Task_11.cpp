#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "Бросание игрального кубика: ";

    int dice = rand() % 6 + 1;
    cout << "Выпало " << dice << endl;

    return 0;
}
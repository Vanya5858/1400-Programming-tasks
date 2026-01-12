#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));


    int side1 = rand() % 7; 
    int side2 = rand() % 7; 

    cout << "Выбрана кость: " << side1 << "-" << side2 << endl;

    return 0;
}
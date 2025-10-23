#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pi = 3.1415926;
    double rounded_pi = round(pi * 1000) / 1000;
    cout << rounded_pi;
    return 0;
}
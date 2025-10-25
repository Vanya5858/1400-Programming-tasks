#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	double v, m, p;
	cout << "\t\tОпределение плотности(P) материала тела\n";
	cout << "Введите Объём тела(V): ";
	cin >> v;
	cout << "Введите массу тела(m): ";
	cin >> m;
	p = m / v;
	cout << "\nОтвет: P = " << p << "\n\n";
	return 0;
}
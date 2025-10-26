#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "RU");
	double x_1, x_2, y_1, y_2, distance;

	// Ввод координат 2 точек
	cout << "\t\t\tНахождение расстояния между 2 точками на координатной плоскости\n";
	cout << "Введите координаты 1 точки: \n";
	cout << "x = ";
	cin >> x_1;
	cout << "y = ";
	cin >> y_1;
	cout << "Введите координаты 2 точки: \n";
	cout << "x = ";
	cin >> x_2;
	cout << "y = ";
	cin >> y_2;

	// Вычисления Расстояния между 2 точками
	distance = sqrt(pow(fabs(x_1 - x_2), 2) + pow(fabs(y_1 - y_2), 2));

	// Вывод результата
	cout << "\nРезультат:" << "\n";
	cout << "Точка A: (" << x_1 << ", " << y_1 << ")" << "\n";
	cout << "Точка B: (" << x_2 << ", " << y_2 << ")" << "\n";
	cout << "Ответ: " << distance << "\n";
	
	return 0;
}
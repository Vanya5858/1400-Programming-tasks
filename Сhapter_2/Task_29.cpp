#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double x_1, x_2, y_1, y_2, x_3, y_3, distance_1, distance_2, distance_3, P, S, Semi_P;

	// Ввод координат 3 точек
	cout << "\t\tНахождение площади и периметра треугольника, изображенного на координатной плоскости\n";
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
	cout << "Введите координаты 3 точки: \n";
	cout << "x = ";
	cin >> x_3;
	cout << "y = ";
	cin >> y_3;

	// Вычисления Расстояния между 2 точками(3 разных вершин)
	distance_1 = sqrt(pow(fabs(x_1 - x_2), 2) + pow(fabs(y_1 - y_2), 2));
	distance_2 = sqrt(pow(fabs(x_1 - x_3), 2) + pow(fabs(y_1 - y_3), 2));
	distance_3 = sqrt(pow(fabs(x_2 - x_3), 2) + pow(fabs(y_2 - y_3), 2));

	// Проверка на существование треугольника
	if (distance_1 + distance_2 <= distance_3 || distance_1 + distance_3 <= distance_2 || distance_2 + distance_3 <= distance_1) {
		cout << "Ошибка: точки лежат на одной прямой!" << endl;
		return 1;
	}

	// Нахождение периметра треугольника
	P = distance_1 + distance_2 + distance_3;
	Semi_P = P / 2;

	// Нахождения площади треугольника(Через полупериметр)
	S = sqrt(Semi_P * (Semi_P - distance_1) * (Semi_P - distance_2) * (Semi_P - distance_3));

	// Вывод результата
	cout << "\nРезультат:" << "\n";
	cout << "Точка A: (" << x_1 << ", " << y_1 << ")" << "\n";
	cout << "Точка B: (" << x_2 << ", " << y_2 << ")" << "\n";
	cout << "Точка C: (" << x_3 << ", " << y_3 << ")" << "\n";
	cout << "Ответ: P = " << P << "; S = " << S << "\n";

	return 0;
}
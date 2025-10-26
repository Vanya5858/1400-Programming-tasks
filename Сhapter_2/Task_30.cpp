#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double x_1, x_2, y_1, y_2, x_3, y_3, x_4, y_4, AB, BC, CD, DA, BD, Semi_P1, Semi_P2, S_general, S1, S2;

	// Ввод координат 4 точек
	cout << "\t\tНахождение площади четырёугольника на координатной плоскости\n";
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
	cout << "Введите координаты 4 точки: \n";
	cout << "x = ";
	cin >> x_4;
	cout << "y = ";
	cin >> y_4;

	// Проверка на вырожденность
	if ((x_1 == x_2 && y_1 == y_2) || (x_2 == x_3 && y_2 == y_3) ||
		(x_3 == x_4 && y_3 == y_4) || (x_4 == x_1 && y_4 == y_1)) {
		cout << "Ошибка: некоторые вершины совпадают!" << endl;
		return 1;
	}

	// Вычисления Расстояния между 2 точками(4 разных вершин)
	AB = sqrt(pow(fabs(x_1 - x_2), 2) + pow(fabs(y_1 - y_2), 2));
	BC = sqrt(pow(fabs(x_2 - x_3), 2) + pow(fabs(y_2 - y_3), 2));
	CD = sqrt(pow(fabs(x_3 - x_4), 2) + pow(fabs(y_3 - y_4), 2));
	DA = sqrt(pow(fabs(x_4 - x_1), 2) + pow(fabs(y_4 - y_1), 2));
	BD = sqrt(pow(fabs(x_2 - x_4), 2) + pow(fabs(y_2 - y_4), 2));

	
	// Нахождение полу-периметра треугольников
	Semi_P1 = (AB + BD + DA) / 2;
	Semi_P2 = (BC + CD + BD) / 2;

	// Нахождения площади треугольников(Через полупериметр)
	S1 = sqrt(Semi_P1 * (Semi_P1 - AB) * (Semi_P1 - BD) * (Semi_P1 - DA));
	S2 = sqrt(Semi_P2 * (Semi_P2 - BC) * (Semi_P2 - CD) * (Semi_P2 - BD));
	S_general = S1 + S2;

	// Вывод результатов
	cout << "\nРезультаты:" << "\n";
	cout << "Точка A: (" << x_1 << ", " << y_1 << ")" << "\n";
	cout << "Точка B: (" << x_2 << ", " << y_2 << ")" << "\n";
	cout << "Точка C: (" << x_3 << ", " << y_3 << ")" << "\n";
	cout << "Точка D: (" << x_4 << ", " << y_4 << ")" << "\n\n";

	cout << "Отрезок AB = " << AB << "\n";
	cout << "Отрезок BC = " << BC << "\n";
	cout << "Отрезок CD = " << CD << "\n";
	cout << "Отрезок DA = " << DA << "\n";
	cout << "Отрезок BD = " << BD << "\n\n";

	cout << "Площадь треугольник ABD(S1) = " << S1 << "\n";
	cout << "Площадь треугольник BCD(S2) = " << S2 << "\n";

	cout << "Ответ: Общая площадь(S) = S1 + S2 = " << S_general << "\n";

	return 0;
}
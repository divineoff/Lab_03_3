// Lab_03_3.cpp
// Самойлюка Дениса
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,R,y; 
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= 0)
		y = (-R * x)/6 - R;
	else
		if (0 < x && x <= R)
			y = sqrt(pow(R,2) - pow(x,2));
		else
			if (R < x && x <= 2 * R)
				y = sqrt(pow(R,2) - pow((x - 2 * R),2));
			else
				y = R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}

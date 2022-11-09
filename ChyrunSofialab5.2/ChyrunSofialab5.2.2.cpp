// ChyrunSofialab5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_05_2.cpp
// < Чирун Софія >
// Лабораторна робота № 5.2 
// Обчислення суми ряду Тейлора за допомогою функцій (2 спосбі) 
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double S(const double x, const double eps, int &n, double &s, double xk);
double A(const double a, const int n, double &s, double &b, double& R);
int main()
{
	double xp, xk, x, dx, eps, s=0;
	int n;
	cout << "xp > 0, xp = "; cin >> xp;
	cout << "xk <=2, xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "log(x)" << " |"
		<< setw(7) << "S" << "    |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		s=S(x, eps, n, s, xk);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
double S(const double x, const double eps, int &n, double &s, double xk)
{
	n = 0;
	s = 0;
	double a, b, R=1;
	do {

		a = x - 1;
		b = n + 1;
		
		R=A(a, n, s, b, R);
		
		n++;
	} while (abs(R) >= eps);
	s += R;
	return s;

}
double A(const double a, const int n, double& s, double& b, double& R)
{
	return R = (pow((-1), n) * pow(a, b)) / b;

}



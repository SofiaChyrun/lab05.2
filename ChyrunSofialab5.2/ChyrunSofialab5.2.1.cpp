// ChyrunSofialab5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_05_2.cpp
// < Чирун Софія >
// Лабораторна робота № 5.2
// Обчислення суми ряду Тейлора за допомогою функцій (1 спосіб) 
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void S(const double x, const double eps, int &n, double &s);
void A(const double a, const int n, double &s, double &b, double& R);
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
		S(x, eps, n, s);
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
void S(const double x, const double eps, int &n, double &s)
{
	n = 0;
	s = 0;
	double a, b, R=1;
	do {

		a = x - 1;
		b = n + 1;
		
		A(a, n, s, b, R);
		
		n++;
	} while (abs(R) >= eps);
}
void A(const double a, const int n, double& s, double& b, double& R)
{
	R = (pow((-1), n) * pow(a, b)) / b;
	s += R;	
}



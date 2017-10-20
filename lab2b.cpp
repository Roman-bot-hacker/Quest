#include"stdafx.h"
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

void main()
{
	double a, b, h, d;
	cout << "Enter limits: [a;b]:\n ";
	cin >> a;
	cin >> b;
	cout << "\nEnter a step: ";
	cin >> h;
	cout << "\nEnter an error: ";
	cin >> d;
	cout << "\n\n\n";
	for (double x = a; x <= b; x += h) {
		int k = 0;
		double sum, y=0;
		do  {
			sum = x*sin(2 * k + 1) / pow((2 * k + 1), 3);
			y += sum;
			k++;
		} while (abs(sum) >= d);
		cout << "x= " << x << endl << "y= " << y << endl << "sum= " << sum << "\n\n";
	}
	getch();
}

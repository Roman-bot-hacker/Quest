#include"stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

void sum_making(int** arr, int* sum, int n)
{
	cout << endl;
	for (int j = 0; j < n - 1; j++) {
		sum[j] = 0;
		for (int i = 0; i < n; i++) {
			if (i + j < n - 1) {
				sum[j] += arr[i][j];
			}
		}
		cout << "Sum of column " << j + 1 << " is " << sum[j] << endl;
	}
}

double ser_geom(int* sum, int n)
{
	double geom=1;
	for (int i = 0; i < n - 1; i++) {
		geom *= sum[i];
	}
	geom = pow(geom, 0.25);
	return geom;
}

void main()
{
	const int n = 5; // creating of dinamic array
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++) { // initialisation of array
		for (int j = 0; j < n; j++) {
			cout << "Enter a new element of array [" << i + 1 << ";" << j + 1 << "]:\n";
			cin >> arr[i][j];
		}
	}
	int x; //sorting by choosing
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int b = 0; b < n; b++) {
				if (arr[i][j] < arr[i][b]) {
					x = arr[i][j];
					arr[i][j] = arr[i][b];
					arr[i][b] = x;
				}
			}
		}
	}
	cout << "\n\n\n"; // array's outputting
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) cout << endl;
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
	int *sum = new int[n];
	sum_making(arr, sum, n);
	cout << endl << "ser geometrychne is " << ser_geom(sum, n);
	system("pause");
}
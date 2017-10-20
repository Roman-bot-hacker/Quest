#include"stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

const int n = 5;
class Matrix
{
private:
	int M[n][n];
	double S[n];
public:
	void InputM();
	void OutputM();
	void SortM();
	void SerGeom();
	void SerArfm();

};

void Matrix::SerGeom()
{
	cout << "SER GEOM of each line:\n";
	for (int i = 0; i < n; i++) {
		int y = 0;
		for (int j = 0; j < n; j++) {
			y += M[i][j];
		}
		S[i] = y;
		cout << "SerGeom for line " << i + 1 << " is " << S[i] << endl;
	}
}

void Matrix::SerArfm()
{
	cout << "Ser Arfm of Ser Geom's is ";
	int z = 0;
	for (int i = 0; i < n; i++) {
		z += S[i];
	}
	z = z / n;
	cout << z << endl;
}

void Matrix::InputM()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "The new element of matrix [" << i+1 << ";" << j+1 << "] is ";
			cin >> M[i][j];
			cout << endl;
		}
	}
}

void Matrix::OutputM()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) cout << endl;
			cout << M[i][j] << "\t";
		}
	}
}

void Matrix::SortM()
{
	int x;
	for (int j = 0; j <n; j++) {
		for (int k = 0; k < n-1; k++) {
			for (int i = 1; i < n; i++) {
				if (M[i][j] < M[i - 1][j]) {
					x = M[i][j];
					M[i][j] = M[i - 1][j];
					M[i - 1][j] = x;
				}
			}
		}
	}
}

void main()
{
	Matrix A;
	cout << "ENTERING OF NEW MATRIX:\n";
	A.InputM();
	cout << "\n\n" << "____________________________________________________\n";
	cout << "ENTERED MATRIX:\n";
	A.OutputM();
	cout << "\n\n" << "____________________________________________________\n";
	A.SortM();
	cout << "SORTED MATRIX:\n";
	A.OutputM();
	cout << "\n\n" << "____________________________________________________\n";
	cout << "SER GEOM:\n";
	A.SerGeom();
	cout << endl;
	A.SerArfm();
	cout << "\n\n" << "____________________________________________________\n";
	system("pause");
}
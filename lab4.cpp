#include"stdafx.h"
#include<iostream>
#include<math.h>

using namespace std;

const int n = 5;
class Matrix
{
private:
	int MainMatrix[n][n];
	double WorkingMatrix[n];
public:
	void InputMainMatrix();
	void OutputMainMatrix();
	void SortMainMatrixExchange();
	void GeometricMeanEachLine();
	void ArifmeticMeanOfGeometricMeans();

};

void Matrix::GeometricMeanEachLine()
{
	cout << "GEOMETRIC MEAN of each line:\n";
	for (int i = 0; i < n; i++) {
		double y = 0;
		double a = 1 / n;
		for (int j = 0; j < n; j++) {
			y *= MainMatrix[i][j];
		}
		WorkingMatrix[i] = pow(y,a);
		cout << "SerGeom for line " << i + 1 << " is " << WorkingMatrix[i] << endl;
	}
}

void Matrix::ArifmeticMeanOfGeometricMeans()
{
	cout << "Arifmatic mean of geometric means is ";
	int z = 0;
	for (int i = 0; i < n; i++) {
		z += WirkingMatrix[i];
	}
	z = z / n;
	cout << z << endl;
}

void Matrix::InputMainMatrix()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "The new element of matrix [" << i+1 << ";" << j+1 << "] is ";
			cin >> MainMatrix[i][j];
			cout << endl;
		}
	}
}

void Matrix::OutputMainMatrix()
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0) cout << endl;
			cout << MainMatrix[i][j] << "\t";
		}
	}
}

void Matrix::SortMainMatrixExchange()
{
	int x;
	for (int j = 0; j <n; j++) {
		for (int k = 0; k < n-1; k++) {
			for (int i = 1; i < n; i++) {
				if (MainMatrix[i][j] < MainMatrix[i - 1][j]) {
					x = MainMatrix[i][j];
					MainMatrix[i][j] = MainMatrix[i - 1][j];
					MainMatrix[i - 1][j] = x;
				}
			}
		}
	}
}

void main()
{
	Matrix A;
	cout << "ENTERING OF NEW MATRIX:\n";
	A.InputMainMatrix();
	cout << "\n\n" << "____________________________________________________\n";
	cout << "ENTERED MATRIX:\n";
	A.OutputMainMatrix();
	cout << "\n\n" << "____________________________________________________\n";
	A.SortMainMatrixExchange();
	cout << "SORTED MATRIX:\n";
	A.OutputMainMatrix();
	cout << "\n\n" << "____________________________________________________\n";
	cout << "Geometric mean:\n";
	A.GeometricMeanEachLine();
	cout << endl;
	A.ArifmeticMeanOfGeomethicMean();
	cout << "\n\n" << "____________________________________________________\n";
	system("pause");
}
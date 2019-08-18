#include <iostream>
using namespace std;

int main()
{
	int row = 5;
	int cols = 5;

	double**mat1 = new double*[row];
	for (int i = 0; i < row; i++)
		mat1[i] = new double[cols];

	double**mat2 = new double*[row];
	for (int i = 0; i < row; i++)
		mat2[i] = new double[cols];
	//looked and couldn't find how to fill a DYNAMIC array in c++ im rusty
	mat1[0][0] = 1.0;
	mat1[0][1] = 2.0;
	mat1[0][2] = 3.0;
	mat1[0][3] = 4.0;
	mat1[0][4] = 5.0;

	mat1[1][0] = 2.0;
	mat1[1][1] = 2.0;
	mat1[1][2] = 2.0;
	mat1[1][3] = 2.0;
	mat1[1][4] = 2.0;

	mat1[2][0] = 3.0;
	mat1[2][1] = 1.0;
	mat1[2][2] = 1.0;
	mat1[2][3] = 1.0;
	mat1[2][4] = 3.0;

	mat1[3][0] = 0.0;
	mat1[3][1] = 0.0;
	mat1[3][2] = 2.0;
	mat1[3][3] = 3.0;
	mat1[3][4] = -2.0;

	mat1[4][0] = 4.0;
	mat1[4][1] = 4.0;
	mat1[4][2] = -4.0;
	mat1[4][3] = 0.0;
	mat1[4][4] = 0.0;
	
	cout << "Matrix 1:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mat1[i][j] << ", ";
		}
		cout << endl;
	}

	mat2[0][0] = 1.0;
	mat2[0][1] = 0.0;
	mat2[0][2] = 0.0;
	mat2[0][3] = 0.0;
	mat2[0][4] = 0.0;

	mat2[1][0] = 1.0;
	mat2[1][1] = 2.0;
	mat2[1][2] = 1.0;
	mat2[1][3] = 2.0;
	mat2[1][4] = 1.0;

	mat2[2][0] = 0.0;
	mat2[2][1] = 0.0;
	mat2[2][2] = 1.0;
	mat2[2][3] = 0.0;
	mat2[2][4] = 0.0;

	mat2[3][0] = 1.0;
	mat2[3][1] = 1.0;
	mat2[3][2] = 1.0;
	mat2[3][3] = 1.0;
	mat2[3][4] = 1.0;

	mat2[4][0] = 2.0;
	mat2[4][1] = 2.0;
	mat2[4][2] = -2.0;
	mat2[4][3] = 2.0;
	mat2[4][4] = 2.0;

	cout << "Matrix 2:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mat2[i][j] << ", ";
		}
		cout << endl;
	}
	//ADD
	double**mat3 = new double*[row];
	for (int i = 0; i < row; i++)
		mat3[i] = new double[cols];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
		cout << endl;
	}
	cout << "Matrix 3:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mat3[i][j] << ", ";
		}
		cout << endl;
	}
	//SUB
	double**mat4 = new double*[row];
	for (int i = 0; i < row; i++)
		mat4[i] = new double[cols];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mat4[i][j] = mat1[i][j] - mat2[i][j];
		}
		cout << endl;
	}
	cout << "Matrix 4:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mat4[i][j] << ", ";
		}
		cout << endl;
	}
	//Divide
	double**mat5 = new double*[row];
	for (int i = 0; i < row; i++)
		mat5[i] = new double[cols];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				mat5[i][j] =+ mat1[i][k] * mat2[k][j];
			}
		}
		cout << endl;
	}
	cout << "Matrix 5:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << mat5[i][j] << ", ";
		}
		cout << endl;
	}
}